
package org.rocksdb;

import org.junit.ClassRule;
import org.junit.Test;

import java.nio.ByteBuffer;

import static org.assertj.core.api.Assertions.assertThat;

public class DirectSliceTest {
  @ClassRule
  public static final RocksMemoryResource rocksMemoryResource =
      new RocksMemoryResource();

  @Test
  public void directSlice() {
    DirectSlice directSlice = null;
    DirectSlice otherSlice = null;
    try {
      directSlice = new DirectSlice("abc");
      otherSlice = new DirectSlice("abc");
      assertThat(directSlice.toString()).isEqualTo("abc");
      // clear first slice
      directSlice.clear();
      assertThat(directSlice.toString()).isEmpty();
      // get first char in otherslice
      assertThat(otherSlice.get(0)).isEqualTo("a".getBytes()[0]);
      // remove prefix
      otherSlice.removePrefix(1);
      assertThat(otherSlice.toString()).isEqualTo("bc");
    } finally {
      if (directSlice != null) {
        directSlice.dispose();
      }
      if (otherSlice != null) {
        otherSlice.dispose();
      }
    }
  }

  @Test
  public void directSliceWithByteBuffer() {
    DirectSlice directSlice = null;
    try {
      byte[] data = "Some text".getBytes();
      ByteBuffer buffer = ByteBuffer.allocateDirect(data.length + 1);
      buffer.put(data);
      buffer.put(data.length, (byte)0);

      directSlice = new DirectSlice(buffer);
      assertThat(directSlice.toString()).isEqualTo("Some text");
    } finally {
      if (directSlice != null) {
        directSlice.dispose();
      }
    }
  }

  @Test
  public void directSliceWithByteBufferAndLength() {
    DirectSlice directSlice = null;
    try {
      byte[] data = "Some text".getBytes();
      ByteBuffer buffer = ByteBuffer.allocateDirect(data.length);
      buffer.put(data);
      directSlice = new DirectSlice(buffer, 4);
      assertThat(directSlice.toString()).isEqualTo("Some");
    } finally {
      if (directSlice != null) {
        directSlice.dispose();
      }
    }
  }

  @Test(expected = AssertionError.class)
  public void directSliceInitWithoutDirectAllocation() {
    DirectSlice directSlice = null;
    try {
      byte[] data = "Some text".getBytes();
      ByteBuffer buffer = ByteBuffer.wrap(data);
      directSlice = new DirectSlice(buffer);
    } finally {
      if (directSlice != null) {
        directSlice.dispose();
      }
    }
  }

  @Test(expected = AssertionError.class)
  public void directSlicePrefixInitWithoutDirectAllocation() {
    DirectSlice directSlice = null;
    try {
      byte[] data = "Some text".getBytes();
      ByteBuffer buffer = ByteBuffer.wrap(data);
      directSlice = new DirectSlice(buffer, 4);
    } finally {
      if (directSlice != null) {
        directSlice.dispose();
      }
    }
  }
}
