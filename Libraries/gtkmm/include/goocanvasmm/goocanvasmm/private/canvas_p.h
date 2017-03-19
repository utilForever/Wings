// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GOOCANVASMM_CANVAS_P_H
#define _GOOCANVASMM_CANVAS_P_H


#include <gtkmm/private/container_p.h>

#include <glibmm/class.h>

namespace Goocanvas
{

class Canvas_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Canvas CppObjectType;
  typedef GooCanvas BaseObjectType;
  typedef GooCanvasClass BaseClassType;
  typedef Gtk::Container_Class CppClassParent;
  typedef GtkContainerClass BaseClassParent;

  friend class Canvas;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void item_created_callback(GooCanvas* self, GooCanvasItem* p0, GooCanvasItemModel* p1);

  //Callbacks (virtual functions):
  static GooCanvasItem* create_item_vfunc_callback(GooCanvas* self, GooCanvasItemModel* model);
};


} // namespace Goocanvas


#endif /* _GOOCANVASMM_CANVAS_P_H */

