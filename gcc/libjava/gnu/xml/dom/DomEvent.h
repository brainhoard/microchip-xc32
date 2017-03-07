
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_dom_DomEvent__
#define __gnu_xml_dom_DomEvent__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace dom
      {
          class DomEvent;
      }
    }
  }
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
        namespace events
        {
            class EventTarget;
        }
      }
    }
  }
}

class gnu::xml::dom::DomEvent : public ::java::lang::Object
{

public:
  virtual ::java::lang::String * getType();
  virtual ::org::w3c::dom::events::EventTarget * getTarget();
  virtual ::org::w3c::dom::events::EventTarget * getCurrentTarget();
  virtual jshort getEventPhase();
  virtual jboolean getBubbles();
  virtual jboolean getCancelable();
  virtual jlong getTimeStamp();
  virtual void stopPropagation();
  virtual void preventDefault();
  virtual void initEvent(::java::lang::String *, jboolean, jboolean);
  DomEvent(::java::lang::String *);
  virtual ::java::lang::String * toString();
public: // actually package-private
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object)))) type;
  ::org::w3c::dom::events::EventTarget * target;
  ::org::w3c::dom::events::EventTarget * currentNode;
  jshort eventPhase;
  jboolean bubbles;
  jboolean cancelable;
  jlong timeStamp;
  jboolean stop;
  jboolean doDefault;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_dom_DomEvent__
