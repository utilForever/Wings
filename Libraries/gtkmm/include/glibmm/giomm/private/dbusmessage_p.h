// -*- c++ -*-
// Generated by gmmproc 2.46.2 -- DO NOT MODIFY!
#ifndef _GIOMM_DBUSMESSAGE_P_H
#define _GIOMM_DBUSMESSAGE_P_H


#include <glibmm/private/object_p.h>

#include <glibmm/class.h>

namespace Gio
{

namespace DBus
{

class Message_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Message CppObjectType;
  typedef GDBusMessage BaseObjectType;
  typedef GDBusMessageClass BaseClassType;
  typedef Glib::Object_Class CppClassParent;
  typedef GObjectClass BaseClassParent;

  friend class Message;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
};


} // namespace DBus

} // namespace Gio


#endif /* _GIOMM_DBUSMESSAGE_P_H */

