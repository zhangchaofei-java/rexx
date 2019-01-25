
package org.rocksdb;

/**
 * Base class for comparators which will receive
 * byte[] based access via org.rocksdb.Slice in their
 * compare method implementation.
 *
 * byte[] based slices perform better when small keys
 * are involved. When using larger keys consider
 * using @see org.rocksdb.DirectComparator
 */
public abstract class Comparator extends AbstractComparator<Slice> {
  public Comparator(final ComparatorOptions copt) {
    super();
    createNewComparator0(copt.nativeHandle_);
  }

  private native void createNewComparator0(final long comparatorOptionsHandle);
}
