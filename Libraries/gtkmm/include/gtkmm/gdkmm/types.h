// -*- c++ -*-
// Generated by gmmproc 2.44.0 -- DO NOT MODIFY!
#ifndef _GDKMM_TYPES_H
#define _GDKMM_TYPES_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2002 The gtkmm Development Team
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


#include <glibmm/value.h>
#include <gdk/gdk.h>
#include <gdkmmconfig.h>

/* Shadow ERROR macro (from wingdi.h).
 */
#if defined(ERROR) && !defined(GTKMM_MACRO_SHADOW_ERROR)
enum { GTKMM_MACRO_DEFINITION_ERROR = ERROR };
#undef ERROR
enum { ERROR = GTKMM_MACRO_DEFINITION_ERROR };
#define ERROR ERROR
#define GTKMM_MACRO_SHADOW_ERROR 1
#endif

/*********************************************************************
***** Version macros
*********************************************************************/

/* macro for controlling version numbers */
#ifndef _GDK_VERSION

#define GDK_VERSION_GT(major,minor) ((GTK_MAJOR_VERSION>major)||(GTK_MAJOR_VERSION==major)&&(GTK_MINOR_VERSION>minor))
#define GDK_VERSION_GE(major,minor) ((GTK_MAJOR_VERSION>major)||(GTK_MAJOR_VERSION==major)&&(GTK_MINOR_VERSION>=minor))
#define GDK_VERSION_EQ(major,minor) ((GTK_MAJOR_VERSION==major)&&(GTK_MINOR_VERSION==minor))
#define GDK_VERSION_NE(major,minor) ((GTK_MAJOR_VERSION!=major)||(GTK_MINOR_VERSION!=minor))
#define GDK_VERSION_LE(major,minor) ((GTK_MAJOR_VERSION<major)||(GTK_MAJOR_VERSION==major)&&(GTK_MINOR_VERSION<=minor))
#define GDK_VERSION_LT(major,minor) ((GTK_MAJOR_VERSION<major)||(GTK_MAJOR_VERSION==major)&&(GTK_MINOR_VERSION<minor))

//Note: Use GTK_CHECK_VERSION to check that a version is equal or more than (the micro version).

#endif /* _GDK_VERSION */

namespace Gdk
{

class Window;
class Font;
class Color;

/** @addtogroup gdkmmEnums gdkmm Enums and Flags */

/** 
 *  @var ByteOrder LSB_FIRST
 * The values are stored with the least-significant byte
 * first. For instance, the 32-bit value 0xffeecc would be stored
 * in memory as 0xcc, 0xee, 0xff, 0x00.
 * 
 *  @var ByteOrder MSB_FIRST
 * The values are stored with the most-significant byte
 * first. For instance, the 32-bit value 0xffeecc would be stored
 * in memory as 0x00, 0xff, 0xee, 0xcc.
 * 
 *  @enum ByteOrder
 * 
 * A set of values describing the possible byte-orders
 * for storing pixel values in memory.
 *
 * @ingroup gdkmmEnums
 */
enum ByteOrder
{
  LSB_FIRST,
  MSB_FIRST
};

} // namespace Gdk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gdk::ByteOrder> : public Glib::Value_Enum<Gdk::ByteOrder>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gdk
{

/** 
 *  @var ModifierType SHIFT_MASK
 * The Shift key.
 * 
 *  @var ModifierType LOCK_MASK
 * A Lock key (depending on the modifier mapping of the
 * X server this may either be CapsLock or ShiftLock).
 * 
 *  @var ModifierType CONTROL_MASK
 * The Control key.
 * 
 *  @var ModifierType MOD1_MASK
 * The fourth modifier key (it depends on the modifier
 * mapping of the X server which key is interpreted as this modifier, but
 * normally it is the Alt key).
 * 
 *  @var ModifierType MOD2_MASK
 * The fifth modifier key (it depends on the modifier
 * mapping of the X server which key is interpreted as this modifier).
 * 
 *  @var ModifierType MOD3_MASK
 * The sixth modifier key (it depends on the modifier
 * mapping of the X server which key is interpreted as this modifier).
 * 
 *  @var ModifierType MOD4_MASK
 * The seventh modifier key (it depends on the modifier
 * mapping of the X server which key is interpreted as this modifier).
 * 
 *  @var ModifierType MOD5_MASK
 * The eighth modifier key (it depends on the modifier
 * mapping of the X server which key is interpreted as this modifier).
 * 
 *  @var ModifierType BUTTON1_MASK
 * The first mouse button.
 * 
 *  @var ModifierType BUTTON2_MASK
 * The second mouse button.
 * 
 *  @var ModifierType BUTTON3_MASK
 * The third mouse button.
 * 
 *  @var ModifierType BUTTON4_MASK
 * The fourth mouse button.
 * 
 *  @var ModifierType BUTTON5_MASK
 * The fifth mouse button.
 * 
 *  @var ModifierType MODIFIER_RESERVED_13_MASK
 * A reserved bit flag; do not use in your own code.
 * 
 *  @var ModifierType MODIFIER_RESERVED_14_MASK
 * A reserved bit flag; do not use in your own code.
 * 
 *  @var ModifierType MODIFIER_RESERVED_15_MASK
 * A reserved bit flag; do not use in your own code.
 * 
 *  @var ModifierType MODIFIER_RESERVED_16_MASK
 * A reserved bit flag; do not use in your own code.
 * 
 *  @var ModifierType MODIFIER_RESERVED_17_MASK
 * A reserved bit flag; do not use in your own code.
 * 
 *  @var ModifierType MODIFIER_RESERVED_18_MASK
 * A reserved bit flag; do not use in your own code.
 * 
 *  @var ModifierType MODIFIER_RESERVED_19_MASK
 * A reserved bit flag; do not use in your own code.
 * 
 *  @var ModifierType MODIFIER_RESERVED_20_MASK
 * A reserved bit flag; do not use in your own code.
 * 
 *  @var ModifierType MODIFIER_RESERVED_21_MASK
 * A reserved bit flag; do not use in your own code.
 * 
 *  @var ModifierType MODIFIER_RESERVED_22_MASK
 * A reserved bit flag; do not use in your own code.
 * 
 *  @var ModifierType MODIFIER_RESERVED_23_MASK
 * A reserved bit flag; do not use in your own code.
 * 
 *  @var ModifierType MODIFIER_RESERVED_24_MASK
 * A reserved bit flag; do not use in your own code.
 * 
 *  @var ModifierType MODIFIER_RESERVED_25_MASK
 * A reserved bit flag; do not use in your own code.
 * 
 *  @var ModifierType SUPER_MASK
 * The Super modifier. @newin{2,10}
 * 
 *  @var ModifierType HYPER_MASK
 * The Hyper modifier. @newin{2,10}
 * 
 *  @var ModifierType META_MASK
 * The Meta modifier. @newin{2,10}
 * 
 *  @var ModifierType MODIFIER_RESERVED_29_MASK
 * A reserved bit flag; do not use in your own code.
 * 
 *  @var ModifierType RELEASE_MASK
 * Not used in GDK itself. GTK+ uses it to differentiate
 * between (keyval, modifiers) pairs from key press and release events.
 * 
 *  @var ModifierType MODIFIER_MASK
 * A mask covering all modifier types.
 * 
 *  @enum ModifierType
 * 
 * A set of bit-flags to indicate the state of modifier keys and mouse buttons
 * in various event types. Typical modifier keys are Shift, Control, Meta,
 * Super, Hyper, Alt, Compose, Apple, CapsLock or ShiftLock.
 * 
 * Like the X&nbsp;%Window System, GDK supports 8 modifier keys and 5 mouse buttons.
 * 
 * Since 2.10, GDK recognizes which of the Meta, Super or Hyper keys are mapped
 * to Mod2 - Mod5, and indicates this by setting Gdk::SUPER_MASK,
 * Gdk::HYPER_MASK or Gdk::META_MASK in the state field of key events.
 * 
 * Note that GDK may add internal values to events which include
 * reserved values such as Gdk::MODIFIER_RESERVED_13_MASK.  Your code
 * should preserve and ignore them.  You can use Gdk::MODIFIER_MASK to
 * remove all reserved values.
 *
 * @ingroup gdkmmEnums
 * @par Bitwise operators:
 * <tt>%ModifierType operator|(ModifierType, ModifierType)</tt><br>
 * <tt>%ModifierType operator&(ModifierType, ModifierType)</tt><br>
 * <tt>%ModifierType operator^(ModifierType, ModifierType)</tt><br>
 * <tt>%ModifierType operator~(ModifierType)</tt><br>
 * <tt>%ModifierType& operator|=(ModifierType&, ModifierType)</tt><br>
 * <tt>%ModifierType& operator&=(ModifierType&, ModifierType)</tt><br>
 * <tt>%ModifierType& operator^=(ModifierType&, ModifierType)</tt><br>
 */
enum ModifierType
{
  SHIFT_MASK = 1 << 0,
  LOCK_MASK = 1 << 1,
  CONTROL_MASK = 1 << 2,
  MOD1_MASK = 1 << 3,
  MOD2_MASK = 1 << 4,
  MOD3_MASK = 1 << 5,
  MOD4_MASK = 1 << 6,
  MOD5_MASK = 1 << 7,
  BUTTON1_MASK = 1 << 8,
  BUTTON2_MASK = 1 << 9,
  BUTTON3_MASK = 1 << 10,
  BUTTON4_MASK = 1 << 11,
  BUTTON5_MASK = 1 << 12,
  MODIFIER_RESERVED_13_MASK = 1 << 13,
  MODIFIER_RESERVED_14_MASK = 1 << 14,
  MODIFIER_RESERVED_15_MASK = 1 << 15,
  MODIFIER_RESERVED_16_MASK = 1 << 16,
  MODIFIER_RESERVED_17_MASK = 1 << 17,
  MODIFIER_RESERVED_18_MASK = 1 << 18,
  MODIFIER_RESERVED_19_MASK = 1 << 19,
  MODIFIER_RESERVED_20_MASK = 1 << 20,
  MODIFIER_RESERVED_21_MASK = 1 << 21,
  MODIFIER_RESERVED_22_MASK = 1 << 22,
  MODIFIER_RESERVED_23_MASK = 1 << 23,
  MODIFIER_RESERVED_24_MASK = 1 << 24,
  MODIFIER_RESERVED_25_MASK = 1 << 25,
  SUPER_MASK = 1 << 26,
  HYPER_MASK = 1 << 27,
  META_MASK = 1 << 28,
  MODIFIER_RESERVED_29_MASK = 1 << 29,
  RELEASE_MASK = 1 << 30,
  MODIFIER_MASK = 0x5c001fff
};

/** @ingroup gdkmmEnums */
inline ModifierType operator|(ModifierType lhs, ModifierType rhs)
  { return static_cast<ModifierType>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup gdkmmEnums */
inline ModifierType operator&(ModifierType lhs, ModifierType rhs)
  { return static_cast<ModifierType>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup gdkmmEnums */
inline ModifierType operator^(ModifierType lhs, ModifierType rhs)
  { return static_cast<ModifierType>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup gdkmmEnums */
inline ModifierType operator~(ModifierType flags)
  { return static_cast<ModifierType>(~static_cast<unsigned>(flags)); }

/** @ingroup gdkmmEnums */
inline ModifierType& operator|=(ModifierType& lhs, ModifierType rhs)
  { return (lhs = static_cast<ModifierType>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup gdkmmEnums */
inline ModifierType& operator&=(ModifierType& lhs, ModifierType rhs)
  { return (lhs = static_cast<ModifierType>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup gdkmmEnums */
inline ModifierType& operator^=(ModifierType& lhs, ModifierType rhs)
  { return (lhs = static_cast<ModifierType>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }

} // namespace Gdk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gdk::ModifierType> : public Glib::Value_Flags<Gdk::ModifierType>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gdk
{

/** 
 *  @var ModifierIntent MODIFIER_INTENT_PRIMARY_ACCELERATOR
 * The primary modifier used to invoke
 * menu accelerators.
 * 
 *  @var ModifierIntent MODIFIER_INTENT_CONTEXT_MENU
 * The modifier used to invoke context menus.
 * Note that mouse button 3 always triggers context menus. When this modifier
 * is not 0, it additionally triggers context menus when used with mouse button 1.
 * 
 *  @var ModifierIntent MODIFIER_INTENT_EXTEND_SELECTION
 * The modifier used to extend selections
 * using `modifier`-click or `modifier`-cursor-key.
 * 
 *  @var ModifierIntent MODIFIER_INTENT_MODIFY_SELECTION
 * The modifier used to modify selections,
 * which in most cases means toggling the clicked item into or out of the selection.
 * 
 *  @var ModifierIntent MODIFIER_INTENT_NO_TEXT_INPUT
 * When any of these modifiers is pressed, the
 * key event cannot produce a symbol directly. This is meant to be used for
 * input methods, and for use cases like typeahead search.
 * 
 *  @var ModifierIntent MODIFIER_INTENT_SHIFT_GROUP
 * The modifier that switches between keyboard
 * groups (AltGr on X11/Windows and Option/Alt on OS X).
 * 
 *  @enum ModifierIntent
 * 
 * This enum is used with Gdk::Keymap::get_modifier_mask()
 * in order to determine what modifiers the
 * currently used windowing system backend uses for particular
 * purposes. For example, on X11/Windows, the Control key is used for
 * invoking menu shortcuts (accelerators), whereas on Apple computers
 * it’s the Command key (which correspond to Gdk::CONTROL_MASK and
 * Gdk::MOD2_MASK, respectively).
 * 
 * @newin{3,4}
 *
 * @ingroup gdkmmEnums
 */
enum ModifierIntent
{
  MODIFIER_INTENT_PRIMARY_ACCELERATOR,
  MODIFIER_INTENT_CONTEXT_MENU,
  MODIFIER_INTENT_EXTEND_SELECTION,
  MODIFIER_INTENT_MODIFY_SELECTION,
  MODIFIER_INTENT_NO_TEXT_INPUT,
  MODIFIER_INTENT_SHIFT_GROUP
};

} // namespace Gdk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gdk::ModifierIntent> : public Glib::Value_Enum<Gdk::ModifierIntent>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gdk
{

/** 
 *
 * @ingroup gdkmmEnums
 */
enum Status
{
  OK = 0,
  ERROR = -1,
  ERROR_PARAM = -2,
  ERROR_FILE = -3,
  ERROR_MEM = -4
};

} // namespace Gdk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gdk::Status> : public Glib::Value_Enum<Gdk::Status>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gdk
{


typedef GdkGeometry Geometry; //It's not used enough to justify having a wrapper.

/** This is a simple structure containing an x and y coordinate of a point.
 */
class Point
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Point CppObjectType;
  typedef GdkPoint BaseObjectType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

private:


public:
  Point();
  Point(int x, int y);

  void set_x(int x) { gobject_.x = x; }
  void set_y(int y) { gobject_.y = y; }

  int get_x() const { return gobject_.x; }
  int get_y() const { return gobject_.y; }

  bool equal(const Gdk::Point& rhs) const;

  /// Provides access to the underlying C GObject.
  GdkPoint*       gobj()       { return &gobject_; }
  /// Provides access to the underlying C GObject.
  const GdkPoint* gobj() const { return &gobject_; }

protected:
  GdkPoint gobject_;


};

/** @relates Gdk::Point */
inline bool operator==(const Point& lhs, const Point& rhs)
  { return lhs.equal(rhs); }

/** @relates Gdk::Point */
inline bool operator!=(const Point& lhs, const Point& rhs)
  { return !lhs.equal(rhs); }

#ifndef DOXYGEN_SHOULD_SKIP_THIS
struct PointTraits
{
  typedef Gdk::Point     CppType;
  typedef GdkPoint       CType;
  typedef GdkPoint       CTypeNonConst;

  static CType   to_c_type      (CType c_obj)            { return c_obj; }
  static void    release_c_type (CType)                  {}
  static CType   to_c_type      (const CppType& cpp_obj) { return *(cpp_obj.gobj ()); }
  static CppType to_cpp_type    (CType c_obj)            { return CppType (c_obj.x, c_obj.y); }
};

struct AtomStringTraits
{
  typedef std::string CppType;
  typedef GdkAtom     CType;
  typedef GdkAtom     CTypeNonConst;

  static GdkAtom to_c_type(GdkAtom atom) { return atom; }
  static void    release_c_type(GdkAtom) {}

  // These aren't worth to be inlined since doing so
  // would expose way too much of the implementation.
  static GdkAtom     to_c_type  (const std::string& atom_name);
  static std::string to_cpp_type(GdkAtom atom);
};

// I'm typedef'ing this because when we call to_c_type or to_c_type,
// we don't want it to look like we're calling a template trait, but
// a utility function. -Bryan
typedef AtomStringTraits AtomString;

struct AtomUstringTraits
{
  typedef Glib::ustring CppType;
  typedef GdkAtom     CType;
  typedef GdkAtom     CTypeNonConst;

  static GdkAtom to_c_type(GdkAtom atom) { return atom; }
  static void    release_c_type(GdkAtom) {}

  // These aren't worth to be inlined since doing so
  // would expose way too much of the implementation.
  static GdkAtom     to_c_type  (const Glib::ustring& atom_name);
  static Glib::ustring to_cpp_type(GdkAtom atom);
};

typedef AtomUstringTraits AtomUstring;
#endif //DOXYGEN_SHOULD_SKIP_THIS

} // namespace Gdk


namespace Glib
{

/** @relates Gdk::Point */
Gdk::Point& wrap(GdkPoint* object);

/** @relates Gdk::Point */
const Gdk::Point& wrap(const GdkPoint* object);

} // namespace Glib


#endif /* _GDKMM_TYPES_H */

