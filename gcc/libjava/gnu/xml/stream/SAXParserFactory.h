
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_stream_SAXParserFactory__
#define __gnu_xml_stream_SAXParserFactory__

#pragma interface

#include <javax/xml/parsers/SAXParserFactory.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace stream
      {
          class SAXParserFactory;
      }
    }
  }
  namespace javax
  {
    namespace xml
    {
      namespace parsers
      {
          class SAXParser;
      }
    }
  }
}

class gnu::xml::stream::SAXParserFactory : public ::javax::xml::parsers::SAXParserFactory
{

public:
  SAXParserFactory();
  virtual ::javax::xml::parsers::SAXParser * newSAXParser();
  virtual void setFeature(::java::lang::String *, jboolean);
  virtual jboolean getFeature(::java::lang::String *);
public: // actually package-private
  static ::java::util::Set * FEATURE_NAMES;
  ::java::util::Map * __attribute__((aligned(__alignof__( ::javax::xml::parsers::SAXParserFactory)))) features;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_stream_SAXParserFactory__
