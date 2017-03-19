// -*- c++ -*-
// Generated by gmmproc 2.46.2 -- DO NOT MODIFY!
#ifndef _GIOMM_VOLUME_P_H
#define _GIOMM_VOLUME_P_H


#include <glibmm/private/interface_p.h>

#include <glibmm/private/interface_p.h>

namespace Gio
{

class Volume_Class : public Glib::Interface_Class
{
public:
  typedef Volume CppObjectType;
  typedef GVolume BaseObjectType;
  typedef GVolumeIface BaseClassType;
  typedef Glib::Interface_Class CppClassParent;

  friend class Volume;

  const Glib::Interface_Class& init();

  static void iface_init_function(void* g_iface, void* iface_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void changed_callback(GVolume* self);
  static void removed_callback(GVolume* self);

  //Callbacks (virtual functions):
};


} // namespace Gio


#endif /* _GIOMM_VOLUME_P_H */

