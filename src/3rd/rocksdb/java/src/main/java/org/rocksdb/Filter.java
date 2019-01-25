
package org.rocksdb;

/**
 * Filters are stored in rocksdb and are consulted automatically
 * by rocksdb to decide whether or not to read some
 * information from disk. In many cases, a filter can cut down the
 * number of disk seeks form a handful to a single disk seek per
 * DB::Get() call.
 */
public abstract class Filter extends RocksObject {
  protected abstract void createNewFilter();

  /**
   * Deletes underlying C++ filter pointer.
   *
   * Note that this function should be called only after all
   * RocksDB instances referencing the filter are closed.
   * Otherwise an undefined behavior will occur.
   */
  @Override protected void disposeInternal() {
    assert(isInitialized());
    disposeInternal(nativeHandle_);
  }

  private native void disposeInternal(long handle);
}
