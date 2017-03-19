// -*- c++ -*-
// Generated by gmmproc 2.44.0 -- DO NOT MODIFY!
#ifndef _GTKMM_EVENTCONTROLLER_H
#define _GTKMM_EVENTCONTROLLER_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2014 The gtkmm Development Team
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
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */

#include <glibmm/object.h>
#include <gtkmm/widget.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkEventController GtkEventController;
typedef struct _GtkEventControllerClass GtkEventControllerClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class EventController_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{
/** @addtogroup gtkmmEnums gtkmm Enums and Flags */

/**  @defgroup Gestures Event Controllers and Gestures
 *
 * These classes handle input events.
 *
 * Event controllers are standalone objects that can perform specific actions
 * upon received GdkEvent%s. These are tied to a Widget, and can be told of
 * the event propagation phase at which they will manage the events.
 *
 * Gestures are a set of specific controllers that are prepared to handle pointer
 * and/or touch events. Each gestures implementation attempts to recognize specific
 * actions out the received events, notifying of the state/progress accordingly to
 * let the widget react to those. On multi-touch gestures, every interacting touch
 * sequence will be tracked independently.
 *
 * See <a href="https://developer.gnome.org/gtk3/unstable/chap-input-handling.html">The GTK+ Input Handling Model</a>
 * for more information about input events and gestures.
 *
 * @newin{3,14}
 *  @var PropagationPhase PHASE_NONE
 * Events are not delivered automatically. Those can be
 * manually fed through Gtk::EventController::handle_event(). This should
 * only be used when full control about when, or whether the controller
 * handles the event is needed.
 * 
 *  @var PropagationPhase PHASE_CAPTURE
 * Events are delivered in the capture phase. The
 * capture phase happens before the bubble phase, runs from the toplevel down
 * to the event widget. This option should only be used on containers that
 * might possibly handle events before their children do.
 * 
 *  @var PropagationPhase PHASE_BUBBLE
 * Events are delivered in the bubble phase. The bubble
 * phase happens after the capture phase, and before the default handlers
 * are run. This phase runs from the event widget, up to the toplevel.
 * 
 *  @var PropagationPhase PHASE_TARGET
 * Events are delivered in the default widget event handlers,
 * note that widget implementations must chain up on button, motion, touch and
 * grab broken handlers for controllers in this phase to be run.
 * 
 *  @enum PropagationPhase
 * 
 * Describes the stage at which events are fed into a Gtk::EventController.
 * 
 * @newin{3,14}
 *
 * @ingroup gtkmmEnums
 */
enum PropagationPhase
{
  PHASE_NONE,
  PHASE_CAPTURE,
  PHASE_BUBBLE,
  PHASE_TARGET
};

} // namespace Gtk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gtk::PropagationPhase> : public Glib::Value_Enum<Gtk::PropagationPhase>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{


/** Self-contained handler of series of events.
 *
 * This is an abstract base class, low-level implementation for event
 * controllers. Those react to a series of GdkEvent%s, and possibly trigger
 * actions as a consequence of those.
 *
 * @newin{3,14}
 *
 * @ingroup Gestures
 */

class EventController : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef EventController CppObjectType;
  typedef EventController_Class CppClassType;
  typedef GtkEventController BaseObjectType;
  typedef GtkEventControllerClass BaseClassType;

private:  friend class EventController_Class;
  static CppClassType eventcontroller_class_;

private:
  // noncopyable
  EventController(const EventController&);
  EventController& operator=(const EventController&);

protected:
  explicit EventController(const Glib::ConstructParams& construct_params);
  explicit EventController(GtkEventController* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~EventController();

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkEventController*       gobj()       { return reinterpret_cast<GtkEventController*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkEventController* gobj() const { return reinterpret_cast<GtkEventController*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkEventController* gobj_copy();

private:


protected:
  /** There is no create() method that corresponds to this constructor,
   * because only derived classes shall be created.
   */
  EventController();

public:
  // No create() because only derived classes shall be instantiated.
   
  
  /** Returns the Gtk::Widget this controller relates to.
   * 
   * @newin{3,14}
   * 
   * @return A Gtk::Widget.
   */
  Widget* get_widget();
  
  /** Returns the Gtk::Widget this controller relates to.
   * 
   * @newin{3,14}
   * 
   * @return A Gtk::Widget.
   */
  const Widget* get_widget() const;
  
  /** Feeds an events into @a controller, so it can be interpreted
   * and the controller actions triggered.
   * 
   * @newin{3,14}
   * 
   * @param event A Gdk::Event.
   * @return <tt>true</tt> if the event was potentially useful to trigger the
   * controller action.
   */
  bool handle_event(const GdkEvent* event);
  
  /** Resets the @a controller to a clean state. Every interaction
   * the controller did through Gtk::EventController::signal_handle_event()
   * will be dropped at this point.
   * 
   * @newin{3,14}
   * 
   */
  void reset();
  
  /** Gets the propagation phase at which @a controller handles events.
   * 
   * @newin{3,14}
   * 
   * @return The propagation phase.
   */
  PropagationPhase get_propagation_phase() const;
  
  /** Sets the propagation phase at which a controller handles events.
   * 
   * If @a phase is Gtk::PHASE_NONE, no automatic event handling will be
   * performed, but other additional gesture maintenance will. In that phase,
   * the events can be managed by calling handle_event().
   * 
   * @newin{3,14}
   * 
   * @param phase A propagation phase.
   */
  void set_propagation_phase(PropagationPhase phase);

  /** Widget the gesture relates to.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Widget* > property_widget() const;


  /** Propagation phase at which this controller is run.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< PropagationPhase > property_propagation_phase() ;

/** Propagation phase at which this controller is run.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< PropagationPhase > property_propagation_phase() const;


  // EventController has no signals


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
   * @relates Gtk::EventController
   */
  Glib::RefPtr<Gtk::EventController> wrap(GtkEventController* object, bool take_copy = false);
}


#endif /* _GTKMM_EVENTCONTROLLER_H */

