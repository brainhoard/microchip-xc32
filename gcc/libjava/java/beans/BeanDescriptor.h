
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_beans_BeanDescriptor__
#define __java_beans_BeanDescriptor__

#pragma interface

#include <java/beans/FeatureDescriptor.h>
extern "Java"
{
  namespace java
  {
    namespace beans
    {
        class BeanDescriptor;
    }
  }
}

class java::beans::BeanDescriptor : public ::java::beans::FeatureDescriptor
{

public:
  BeanDescriptor(::java::lang::Class *);
  BeanDescriptor(::java::lang::Class *, ::java::lang::Class *);
  virtual ::java::lang::Class * getBeanClass();
  virtual ::java::lang::Class * getCustomizerClass();
public: // actually package-private
  ::java::lang::Class * __attribute__((aligned(__alignof__( ::java::beans::FeatureDescriptor)))) beanClass;
  ::java::lang::Class * customizerClass;
public:
  static ::java::lang::Class class$;
};

#endif // __java_beans_BeanDescriptor__
