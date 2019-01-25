
#include "db/write_controller.h"

#include <cassert>

namespace rocksdb {

std::unique_ptr<WriteControllerToken> WriteController::GetStopToken() {
  ++total_stopped_;
  return std::unique_ptr<WriteControllerToken>(new StopWriteToken(this));
}

std::unique_ptr<WriteControllerToken> WriteController::GetDelayToken(
    uint64_t delay_us) {
  total_delay_us_ += delay_us;
  return std::unique_ptr<WriteControllerToken>(
      new DelayWriteToken(this, delay_us));
}

bool WriteController::IsStopped() const { return total_stopped_ > 0; }
uint64_t WriteController::GetDelay() const { return total_delay_us_; }

StopWriteToken::~StopWriteToken() {
  assert(controller_->total_stopped_ >= 1);
  --controller_->total_stopped_;
}

DelayWriteToken::~DelayWriteToken() {
  assert(controller_->total_delay_us_ >= delay_us_);
  controller_->total_delay_us_ -= delay_us_;
}

}  // namespace rocksdb
