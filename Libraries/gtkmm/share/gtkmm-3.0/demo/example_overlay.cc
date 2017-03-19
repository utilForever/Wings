/* Overlay
 *
 * Stack widgets in static positions over a main widget.
 */

#include "gtkmm.h"

class Example_Overlay : public Gtk::Window
{
public:
  Example_Overlay();
  virtual ~Example_Overlay();

protected:

  // Widgets
  Gtk::TextView m_text_view;
  Gtk::ScrolledWindow m_scrolled_window;
  Gtk::Entry m_entries[9];
  Gtk::Label m_labels[9];

  // Containers
  Gtk::Overlay m_overlay;

private:
  void configure_entries_and_labels();
};

//Called by DemoWindow;
Gtk::Window* do_overlay()
{
  return new Example_Overlay();
}

Example_Overlay::Example_Overlay()
{
  // Window properties
  set_default_size(450, 450);
  set_title("Overlay");
  set_border_width(0);

  // Main text view
  m_scrolled_window.set_policy(Gtk::POLICY_AUTOMATIC, Gtk::POLICY_AUTOMATIC);
  m_scrolled_window.add(m_text_view);

  // Entries and labels
  configure_entries_and_labels();

  // Layout
  m_overlay.add(m_scrolled_window);
  add(m_overlay);

  show_all_children();
}

Example_Overlay::~Example_Overlay()
{
}

void Example_Overlay::configure_entries_and_labels()
{
  // We first set common attributes, and
  // add widgets to the overlay
  for (int i =0; i < 9; ++i)
  {
    m_labels[i].set_text("Hello world");
    m_labels[i].set_margin_start(20);
    m_labels[i].set_margin_end(20);
    m_labels[i].set_margin_top(5);
    m_labels[i].set_margin_bottom(5);

    m_overlay.add_overlay(m_entries[i]);
    m_overlay.add_overlay(m_labels[i]);
  }

  // Then we set align attributes
  m_entries[0].set_halign(Gtk::ALIGN_END);
  m_entries[0].set_valign(Gtk::ALIGN_END);
  m_labels[0].set_halign(Gtk::ALIGN_END);
  m_labels[0].set_valign(Gtk::ALIGN_END);

  m_entries[1].set_halign(Gtk::ALIGN_START);
  m_entries[1].set_valign(Gtk::ALIGN_END);
  m_labels[1].set_halign(Gtk::ALIGN_START);
  m_labels[1].set_valign(Gtk::ALIGN_END);

  m_entries[2].set_halign(Gtk::ALIGN_END);
  m_entries[2].set_valign(Gtk::ALIGN_START);
  m_labels[2].set_halign(Gtk::ALIGN_END);
  m_labels[2].set_valign(Gtk::ALIGN_START);

  m_entries[3].set_halign(Gtk::ALIGN_START);
  m_entries[3].set_valign(Gtk::ALIGN_START);
  m_labels[3].set_halign(Gtk::ALIGN_START);
  m_labels[3].set_valign(Gtk::ALIGN_START);

  m_entries[4].set_halign(Gtk::ALIGN_END);
  m_entries[4].set_valign(Gtk::ALIGN_CENTER);
  m_labels[4].set_halign(Gtk::ALIGN_END);
  m_labels[4].set_valign(Gtk::ALIGN_CENTER);

  m_entries[5].set_halign(Gtk::ALIGN_START);
  m_entries[5].set_valign(Gtk::ALIGN_CENTER);
  m_labels[5].set_halign(Gtk::ALIGN_START);
  m_labels[5].set_valign(Gtk::ALIGN_CENTER);

  m_entries[6].set_halign(Gtk::ALIGN_CENTER);
  m_entries[6].set_valign(Gtk::ALIGN_START);
  m_labels[6].set_halign(Gtk::ALIGN_CENTER);
  m_labels[6].set_valign(Gtk::ALIGN_START);

  m_entries[7].set_halign(Gtk::ALIGN_CENTER);
  m_entries[7].set_valign(Gtk::ALIGN_END);
  m_labels[7].set_halign(Gtk::ALIGN_CENTER);
  m_labels[7].set_valign(Gtk::ALIGN_END);

  m_entries[8].set_halign(Gtk::ALIGN_CENTER);
  m_entries[8].set_valign(Gtk::ALIGN_CENTER);
  m_labels[8].set_halign(Gtk::ALIGN_CENTER);
  m_labels[8].set_valign(Gtk::ALIGN_CENTER);
}
