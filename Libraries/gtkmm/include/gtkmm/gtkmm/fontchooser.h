// -*- c++ -*-
// Generated by gmmproc 2.44.0 -- DO NOT MODIFY!
#ifndef _GTKMM_FONTCHOOSER_H
#define _GTKMM_FONTCHOOSER_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2011 The gtkmm Development Team
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


#include <glibmm/interface.h>
#include <pangomm/fontface.h>
#include <pangomm/fontdescription.h>
#include <pangomm/fontfamily.h>

#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C"
{
typedef struct _GtkFontChooserIface GtkFontChooserIface;
}
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkFontChooser GtkFontChooser;
typedef struct _GtkFontChooserClass GtkFontChooserClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class FontChooser_Class; } // namespace Gtk
#endif // DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** An interface implemented by widgets displaying fonts.
 *
 * FontChooser widgets list the available fonts, styles and
 * sizes, allowing the user to select a font.
 *
 * To set the font which is initially selected, use set_font_name().
 *
 * To get the selected font use get_font_name().
 *
 * To change the text which is shown in the preview area, use set_preview_text().
 *
 * @ingroup FontChooser
 * @newin{3,2}
 */

class FontChooser : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef FontChooser CppObjectType;
  typedef FontChooser_Class CppClassType;
  typedef GtkFontChooser BaseObjectType;
  typedef GtkFontChooserIface BaseClassType;

private:
  friend class FontChooser_Class;
  static CppClassType fontchooser_class_;

  // noncopyable
  FontChooser(const FontChooser&);
  FontChooser& operator=(const FontChooser&);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */
protected:
  /**
   * You should derive from this class to use it.
   */
  FontChooser();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  /** Called by constructors of derived classes. Provide the result of 
   * the Class init() function to ensure that it is properly 
   * initialized.
   * 
   * @param interface_class The Class object for the derived type.
   */
  explicit FontChooser(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface. 
  explicit FontChooser(GtkFontChooser* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~FontChooser();

  static void add_interface(GType gtype_implementer);

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkFontChooser*       gobj()       { return reinterpret_cast<GtkFontChooser*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkFontChooser* gobj() const { return reinterpret_cast<GtkFontChooser*>(gobject_); }

private:

public:

  
  /** Gets the Pango::FontFamily representing the selected font family.
   * Font families are a collection of font faces.
   * 
   * If the selected font is not installed, returns <tt>0</tt>.
   * 
   * @newin{3,2}
   * 
   * @return A Pango::FontFamily representing the
   * selected font family, or <tt>0</tt>. The returned object is owned by @a fontchooser
   * and must not be modified or freed.
   */
  Glib::RefPtr<Pango::FontFamily> get_font_family();
  
  /** Gets the Pango::FontFamily representing the selected font family.
   * Font families are a collection of font faces.
   * 
   * If the selected font is not installed, returns <tt>0</tt>.
   * 
   * @newin{3,2}
   * 
   * @return A Pango::FontFamily representing the
   * selected font family, or <tt>0</tt>. The returned object is owned by @a fontchooser
   * and must not be modified or freed.
   */
  Glib::RefPtr<const Pango::FontFamily> get_font_family() const;

  
  /** Gets the Pango::FontFace representing the selected font group
   * details (i.e.\ family, slant, weight, width, etc).
   * 
   * If the selected font is not installed, returns <tt>0</tt>.
   * 
   * @newin{3,2}
   * 
   * @return A Pango::FontFace representing the
   * selected font group details, or <tt>0</tt>. The returned object is owned by
   *  @a fontchooser and must not be modified or freed.
   */
  Glib::RefPtr<Pango::FontFace> get_font_face();
  
  /** Gets the Pango::FontFace representing the selected font group
   * details (i.e.\ family, slant, weight, width, etc).
   * 
   * If the selected font is not installed, returns <tt>0</tt>.
   * 
   * @newin{3,2}
   * 
   * @return A Pango::FontFace representing the
   * selected font group details, or <tt>0</tt>. The returned object is owned by
   *  @a fontchooser and must not be modified or freed.
   */
  Glib::RefPtr<const Pango::FontFace> get_font_face() const;

  
  /** The selected font size.
   * 
   * @newin{3,2}
   * 
   * @return A n integer representing the selected font size,
   * or -1 if no font size is selected.
   */
  int get_font_size() const;

 
  /** Gets the currently-selected font.
   * 
   * Note that this can be a different string than what you set with
   * set_font(), as the font chooser widget may
   * normalize font names and thus return a string with a different
   * structure. For example, “Helvetica Italic Bold 12” could be
   * normalized to “Helvetica Bold Italic 12”.
   * 
   * Use pango_font_description_equal() if you want to compare two
   * font descriptions.
   * 
   * @newin{3,2}
   * 
   * @return A Pango::FontDescription for the
   * current font, or <tt>0</tt> if  no font is selected.
   */
  Pango::FontDescription get_font_desc() const;
  
  /** Sets the currently-selected font from @a font_desc.
   * 
   * @newin{3,2}
   * 
   * @param font_desc A Pango::FontDescription.
   */
  void set_font_desc(const Pango::FontDescription& font_desc);

  
  /** Gets the currently-selected font name.
   * 
   * Note that this can be a different string than what you set with
   * set_font(), as the font chooser widget may
   * normalize font names and thus return a string with a different
   * structure. For example, “Helvetica Italic Bold 12” could be
   * normalized to “Helvetica Bold Italic 12”.
   * 
   * Use pango_font_description_equal() if you want to compare two
   * font descriptions.
   * 
   * @newin{3,2}
   * 
   * @return A string with the name
   * of the current font, or <tt>0</tt> if  no font is selected. You must
   * free this string with Glib::free().
   */
  Glib::ustring get_font() const;
  
  /** Sets the currently-selected font.
   * 
   * @newin{3,2}
   * 
   * @param fontname A font name like “Helvetica 12” or “Times Bold 18”.
   */
  void set_font(const Glib::ustring& fontname);
  
  /** Gets the text displayed in the preview area.
   * 
   * @newin{3,2}
   * 
   * @return The text displayed in the
   * preview area.
   */
  Glib::ustring get_preview_text() const;
  
  /** Sets the text displayed in the preview area.
   * The @a text is used to show how the selected font looks.
   * 
   * @newin{3,2}
   * 
   * @param text The text to display in the preview area.
   */
  void set_preview_text(const Glib::ustring& text);

  
  /** Returns whether the preview entry is shown or not.
   * 
   * @newin{3,2}
   * 
   * @return <tt>true</tt> if the preview entry is shown
   * or <tt>false</tt> if it is hidden.
   */
  bool get_show_preview_entry() const;
  
  /** Shows or hides the editable preview entry.
   * 
   * @newin{3,2}
   * 
   * @param show_preview_entry Whether to show the editable preview entry or not.
   */
  void set_show_preview_entry(bool show_preview_entry =  true);

  /** Font filter callback.
   * For instance,
   * @code
   * bool on_font_fitler(const Glib::RefPtr<const Pango::FontFamily>& font_family, const Glib::RefPtr<const Pango::FontFace>& font_face);
   * @endcode
   *
   * @param font_family A Pango FontFamily.
   * @param font_face A Font Face belonging to the @a font_family.
   * @result true if the font should be displayed.
   *
   * This is used for deciding what fonts should be shown in a FontChooser.
   * See set_filter_func().
   *
   * @newin{3,4}
   */
  typedef sigc::slot<bool, const Glib::RefPtr<const Pango::FontFamily>&, const Glib::RefPtr<const Pango::FontFace>&> SlotFontFilter;

  /** Adds a filter function that decides which fonts to display in the font chooser.
   *
   * @param slot A callback, to be called for each font.
   *
   * @newin{3,4}
   */
  void set_filter_func(const SlotFontFilter& slot);
  

  //TODO: Remove no_default_handler when we can break ABI.
  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%font_activated(const Glib::ustring& fontname)</tt>
   *
   * Emitted when a font is activated.
   * This usually happens when the user double clicks an item,
   * or an item is selected and the user presses one of the keys
   * Space, Shift+Space, Return or Enter.
   * 
   * @param fontname The font name.
   */

  Glib::SignalProxy1< void,const Glib::ustring& > signal_font_activated();


  /** Font description as a string, e.g. 'Sans Italic 12'.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_font() ;

/** Font description as a string, e.g. 'Sans Italic 12'.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_font() const;

  /** Font description as a PangoFontDescription struct.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Pango::FontDescription > property_font_desc() ;

/** Font description as a PangoFontDescription struct.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Pango::FontDescription > property_font_desc() const;

  /** The text to display in order to demonstrate the selected font.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_preview_text() ;

/** The text to display in order to demonstrate the selected font.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_preview_text() const;

  /** Whether the preview text entry is shown or not.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_show_preview_entry() ;

/** Whether the preview text entry is shown or not.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_show_preview_entry() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::FontChooser
   */
  Glib::RefPtr<Gtk::FontChooser> wrap(GtkFontChooser* object, bool take_copy = false);

} // namespace Glib


#endif /* _GTKMM_FONTCHOOSER_H */

