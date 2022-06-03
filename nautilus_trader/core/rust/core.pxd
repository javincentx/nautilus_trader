# Warning, this file is autogenerated by cbindgen. Don't modify this manually. */

from cpython.object cimport PyObject
from libc.stdint cimport uint8_t, uint64_t

cdef extern from "../includes/core.h":

    cdef struct String:
        pass

    cdef struct UUID4_t:
        String *value;

    # Returns monotonic time elapsed from given instant
    double mono_unix_timestamp();

    # Returns monotonic time elapsed from given instant in milliseconds
    uint64_t mono_unix_timestamp_ms();

    # Returns monotonic time elapsed from given instant in microseconds
    uint64_t mono_unix_timestamp_us();

    # Returns monotonic time elapsed from given instant in nanoseconds
    uint64_t mono_unix_timestamp_ns();

    # Returns the current seconds since the UNIX epoch.
    double unix_timestamp();

    # Returns the current milliseconds since the UNIX epoch.
    uint64_t unix_timestamp_ms();

    # Returns the current microseconds since the UNIX epoch.
    uint64_t unix_timestamp_us();

    # Returns the current nanoseconds since the UNIX epoch.
    uint64_t unix_timestamp_ns();

    UUID4_t uuid4_new();

    void uuid4_free(UUID4_t uuid4);

    # Returns a `UUID4` from a valid Python object pointer.
    #
    # # Safety
    # - `ptr` must be borrowed from a valid Python UTF-8 `str`.
    UUID4_t uuid4_from_pystr(PyObject *ptr);

    # Returns a pointer to a valid Python UTF-8 string.
    #
    # # Safety
    # - Assumes that since the data is originating from Rust, the GIL does not need
    # to be acquired.
    # - Assumes you are immediately returning this pointer to Python.
    PyObject *uuid4_to_pystr(const UUID4_t *uuid);

    uint8_t uuid4_eq(const UUID4_t *lhs, const UUID4_t *rhs);

    uint64_t uuid4_hash(const UUID4_t *uuid);
