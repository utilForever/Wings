// -*- c++ -*-
// Generated by gmmproc 2.46.2 -- DO NOT MODIFY!
#ifndef _GIOMM_SOCKETSERVICE_P_H
#define _GIOMM_SOCKETSERVICE_P_H


#include <giomm/private/socketlistener_p.h>

#include <glibmm/class.h>

namespace Gio
{

class SocketService_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef SocketService CppObjectType;
  typedef GSocketService BaseObjectType;
  typedef GSocketServiceClass BaseClassType;
  typedef Gio::SocketListener_Class CppClassParent;
  typedef GSocketListenerClass BaseClassParent;

  friend class SocketService;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static gboolean incoming_callback(GSocketService* self, GSocketConnection* p0, GObject* p1);

  //Callbacks (virtual functions):
};


} // namespace Gio


#endif /* _GIOMM_SOCKETSERVICE_P_H */

