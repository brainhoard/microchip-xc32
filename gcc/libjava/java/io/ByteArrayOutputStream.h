
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_io_ByteArrayOutputStream__
#define __java_io_ByteArrayOutputStream__

#pragma interface

#include <java/io/OutputStream.h>
#include <gcj/array.h>


class java::io::ByteArrayOutputStream : public ::java::io::OutputStream
{

public:
  ByteArrayOutputStream();
  ByteArrayOutputStream(jint);
  virtual void reset();
  virtual jint size();
  virtual JArray< jbyte > * toByteArray();
  virtual ::java::lang::String * toString();
  virtual ::java::lang::String * toString(::java::lang::String *);
  virtual ::java::lang::String * toString(jint);
private:
  void resize(jint);
public:
  virtual void write(jint);
  virtual void write(JArray< jbyte > *, jint, jint);
  virtual void writeTo(::java::io::OutputStream *);
public: // actually protected
  JArray< jbyte > * __attribute__((aligned(__alignof__( ::java::io::OutputStream)))) buf;
  jint count;
private:
  static const jint DEFAULT_INITIAL_BUFFER_SIZE = 32;
  static jint initial_buffer_size;
public:
  static ::java::lang::Class class$;
};

#endif // __java_io_ByteArrayOutputStream__
