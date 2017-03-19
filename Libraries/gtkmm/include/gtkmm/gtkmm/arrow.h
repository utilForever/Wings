// -*- c++ -*-
// Generated by gmmproc 2.44.0 -- DO NOT MODIFY!
#ifndef _GTKMM_ARROW_H
#define _GTKMM_ARROW_H


#ifndef GTKMM_DISABLE_DEPRECATED


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 1998-2002 The gtkmm Development Team
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
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <gtkmm/misc.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkArrow GtkArrow;
typedef struct _GtkArrowClass GtkArrowClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class Arrow_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** Produces an arrow pointing in one of the four cardinal directions.
 *
 * This is intended for use where a directional arrow (in one of the four
 * cardinal directions) is desired. As such, it has very limited
 * functionality and basically only draws itself in a particular direction
 * and with a particular shadow type.
 *
 * Gtk::Arrow will fill any space alloted to it, but since it is inherited
 * from Gtk::Misc, it can be padded and/or aligned, to fill exactly the
 * space the programmer desires.
 *
 * The Arrow widget looks like this:
 * @image html arrow1.png
 *
 * @ingroup Widgets
 * @deprecated You should instead use a Gtk::Image with a
 * suitable icon name, such as “pan-down-symbolic“. When replacing 
 * Gtk::Arrow by an image, pay attention to the fact that Gtk::Arrow automatically
 * flips between Gtk::ARROW_LEFT and Gtk::ARROW_RIGHT,
 * depending on the text direction. To get the same effect with an image,
 * use the icon names “pan-start-symbolic“ and “pan-end-symbolic“, which
 * react to the text direction instead of “pan-left-symbolic“ and
 * “pan-right-symbolic“ which don't.
 */

class Arrow : public Misc {
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Arrow CppObjectType;
  typedef Arrow_Class CppClassType;
  typedef GtkArrow BaseObjectType;
  typedef GtkArrowClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~Arrow();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class Arrow_Class;
  static CppClassType arrow_class_;

  // noncopyable
  Arrow(const Arrow&);
  Arrow& operator=(const Arrow&);

protected:
  explicit Arrow(const Glib::ConstructParams& construct_params);
  explicit Arrow(GtkArrow* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkArrow*       gobj()       { return reinterpret_cast<GtkArrow*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkArrow* gobj() const { return reinterpret_cast<GtkArrow*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

  
public:


  /** Creates an arrow.
   *
   * @param arrow_type A Gtk::ArrowType enum describing the arrow direction.
   * @param shadow_type A Gtk::ShadowType enum describing the shadow type of
   * the arrow.
   */
    explicit Arrow(ArrowType arrow_type, ShadowType shadow_type);


  // Changes the direction and shadow of an arrow.
  
  /** Sets the direction and shadow of this Arrow.
   * 
   * @param arrow_type A Gtk::ArrowType enum describing what arrow type to set this Arrow to.
   * @param shadow_type A Gtk::ShadowType enum describing what shadow type to set this Arrow to.
   */
  void set(ArrowType arrow_type, ShadowType shadow_type);

  /** The direction the arrow should point.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< ArrowType > property_arrow_type() ;

/** The direction the arrow should point.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< ArrowType > property_arrow_type() const;

  /** Appearance of the shadow surrounding the arrow.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< ShadowType > property_shadow_type() ;

/** Appearance of the shadow surrounding the arrow.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< ShadowType > property_shadow_type() const;


};


} //namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Arrow
   */
  Gtk::Arrow* wrap(GtkArrow* object, bool take_copy = false);
} //namespace Glib


#endif // GTKMM_DISABLE_DEPRECATED


#endif /* _GTKMM_ARROW_H */

