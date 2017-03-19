// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GOOCANVASMM_ELLIPSE_H
#define _GOOCANVASMM_ELLIPSE_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 1998-2006 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */


#include <goocanvasmm/itemsimple.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GooCanvasEllipse GooCanvasEllipse;
typedef struct _GooCanvasEllipseClass GooCanvasEllipseClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Goocanvas
{ class Ellipse_Class; } // namespace Goocanvas
namespace Goocanvas
{


class Ellipse : public Goocanvas::ItemSimple
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Ellipse CppObjectType;
  typedef Ellipse_Class CppClassType;
  typedef GooCanvasEllipse BaseObjectType;
  typedef GooCanvasEllipseClass BaseClassType;

private:  friend class Ellipse_Class;
  static CppClassType ellipse_class_;

private:
  // noncopyable
  Ellipse(const Ellipse&);
  Ellipse& operator=(const Ellipse&);

protected:
  explicit Ellipse(const Glib::ConstructParams& construct_params);
  explicit Ellipse(GooCanvasEllipse* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~Ellipse();

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GooCanvasEllipse*       gobj()       { return reinterpret_cast<GooCanvasEllipse*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GooCanvasEllipse* gobj() const { return reinterpret_cast<GooCanvasEllipse*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GooCanvasEllipse* gobj_copy();

private:

protected:

  explicit Ellipse(double center_x = 0.0, double center_y = 0.0, double radius_x = 0.0, double radius_y = 0.0);
  

public:

  
  static Glib::RefPtr<Ellipse> create(double center_x =  0.0, double center_y =  0.0, double radius_x =  0.0, double radius_y =  0.0);


  //We put these in item.hg instead.
  //See the comment there.
  //_WRAP_PROPERTY("x", double)
  //_WRAP_PROPERTY("y", double)
  //_WRAP_PROPERTY("width", double)
  //_WRAP_PROPERTY("height", double)
  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The x coordinate of the center of the ellipse.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< double > property_center_x() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The x coordinate of the center of the ellipse.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< double > property_center_x() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The y coordinate of the center of the ellipse.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< double > property_center_y() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The y coordinate of the center of the ellipse.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< double > property_center_y() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The horizontal radius of the ellipse.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< double > property_radius_x() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The horizontal radius of the ellipse.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< double > property_radius_x() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The vertical radius of the ellipse.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< double > property_radius_y() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The vertical radius of the ellipse.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< double > property_radius_y() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} //namespace Goocanvas


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Goocanvas::Ellipse
   */
  Glib::RefPtr<Goocanvas::Ellipse> wrap(GooCanvasEllipse* object, bool take_copy = false);
}


#endif /* _GOOCANVASMM_ELLIPSE_H */

