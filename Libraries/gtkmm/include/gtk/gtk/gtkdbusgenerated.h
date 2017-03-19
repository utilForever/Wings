/*
 * Generated by gdbus-codegen 2.48.1. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __GTKDBUSGENERATED_H__
#define __GTKDBUSGENERATED_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.Gtk.MountOperationHandler */

#define _GTK_TYPE_MOUNT_OPERATION_HANDLER (_gtk_mount_operation_handler_get_type ())
#define _GTK_MOUNT_OPERATION_HANDLER(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), _GTK_TYPE_MOUNT_OPERATION_HANDLER, _GtkMountOperationHandler))
#define _GTK_IS_MOUNT_OPERATION_HANDLER(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), _GTK_TYPE_MOUNT_OPERATION_HANDLER))
#define _GTK_MOUNT_OPERATION_HANDLER_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), _GTK_TYPE_MOUNT_OPERATION_HANDLER, _GtkMountOperationHandlerIface))

struct __GtkMountOperationHandler;
typedef struct __GtkMountOperationHandler _GtkMountOperationHandler;
typedef struct __GtkMountOperationHandlerIface _GtkMountOperationHandlerIface;

struct __GtkMountOperationHandlerIface
{
  GTypeInterface parent_iface;

  gboolean (*handle_ask_password) (
    _GtkMountOperationHandler *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_id,
    const gchar *arg_message,
    const gchar *arg_icon_name,
    const gchar *arg_default_user,
    const gchar *arg_default_domain,
    guint arg_flags);

  gboolean (*handle_ask_question) (
    _GtkMountOperationHandler *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_id,
    const gchar *arg_message,
    const gchar *arg_icon_name,
    const gchar *const *arg_choices);

  gboolean (*handle_close) (
    _GtkMountOperationHandler *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_show_processes) (
    _GtkMountOperationHandler *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_id,
    const gchar *arg_message,
    const gchar *arg_icon_name,
    GVariant *arg_application_pids,
    const gchar *const *arg_choices);

};

GType _gtk_mount_operation_handler_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *_gtk_mount_operation_handler_interface_info (void);
guint _gtk_mount_operation_handler_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void _gtk_mount_operation_handler_complete_ask_password (
    _GtkMountOperationHandler *object,
    GDBusMethodInvocation *invocation,
    guint response,
    GVariant *response_details);

void _gtk_mount_operation_handler_complete_ask_question (
    _GtkMountOperationHandler *object,
    GDBusMethodInvocation *invocation,
    guint response,
    GVariant *response_details);

void _gtk_mount_operation_handler_complete_show_processes (
    _GtkMountOperationHandler *object,
    GDBusMethodInvocation *invocation,
    guint response,
    GVariant *response_details);

void _gtk_mount_operation_handler_complete_close (
    _GtkMountOperationHandler *object,
    GDBusMethodInvocation *invocation);



/* D-Bus method calls: */
void _gtk_mount_operation_handler_call_ask_password (
    _GtkMountOperationHandler *proxy,
    const gchar *arg_id,
    const gchar *arg_message,
    const gchar *arg_icon_name,
    const gchar *arg_default_user,
    const gchar *arg_default_domain,
    guint arg_flags,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean _gtk_mount_operation_handler_call_ask_password_finish (
    _GtkMountOperationHandler *proxy,
    guint *out_response,
    GVariant **out_response_details,
    GAsyncResult *res,
    GError **error);

gboolean _gtk_mount_operation_handler_call_ask_password_sync (
    _GtkMountOperationHandler *proxy,
    const gchar *arg_id,
    const gchar *arg_message,
    const gchar *arg_icon_name,
    const gchar *arg_default_user,
    const gchar *arg_default_domain,
    guint arg_flags,
    guint *out_response,
    GVariant **out_response_details,
    GCancellable *cancellable,
    GError **error);

void _gtk_mount_operation_handler_call_ask_question (
    _GtkMountOperationHandler *proxy,
    const gchar *arg_id,
    const gchar *arg_message,
    const gchar *arg_icon_name,
    const gchar *const *arg_choices,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean _gtk_mount_operation_handler_call_ask_question_finish (
    _GtkMountOperationHandler *proxy,
    guint *out_response,
    GVariant **out_response_details,
    GAsyncResult *res,
    GError **error);

gboolean _gtk_mount_operation_handler_call_ask_question_sync (
    _GtkMountOperationHandler *proxy,
    const gchar *arg_id,
    const gchar *arg_message,
    const gchar *arg_icon_name,
    const gchar *const *arg_choices,
    guint *out_response,
    GVariant **out_response_details,
    GCancellable *cancellable,
    GError **error);

void _gtk_mount_operation_handler_call_show_processes (
    _GtkMountOperationHandler *proxy,
    const gchar *arg_id,
    const gchar *arg_message,
    const gchar *arg_icon_name,
    GVariant *arg_application_pids,
    const gchar *const *arg_choices,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean _gtk_mount_operation_handler_call_show_processes_finish (
    _GtkMountOperationHandler *proxy,
    guint *out_response,
    GVariant **out_response_details,
    GAsyncResult *res,
    GError **error);

gboolean _gtk_mount_operation_handler_call_show_processes_sync (
    _GtkMountOperationHandler *proxy,
    const gchar *arg_id,
    const gchar *arg_message,
    const gchar *arg_icon_name,
    GVariant *arg_application_pids,
    const gchar *const *arg_choices,
    guint *out_response,
    GVariant **out_response_details,
    GCancellable *cancellable,
    GError **error);

void _gtk_mount_operation_handler_call_close (
    _GtkMountOperationHandler *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean _gtk_mount_operation_handler_call_close_finish (
    _GtkMountOperationHandler *proxy,
    GAsyncResult *res,
    GError **error);

gboolean _gtk_mount_operation_handler_call_close_sync (
    _GtkMountOperationHandler *proxy,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define _GTK_TYPE_MOUNT_OPERATION_HANDLER_PROXY (_gtk_mount_operation_handler_proxy_get_type ())
#define _GTK_MOUNT_OPERATION_HANDLER_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), _GTK_TYPE_MOUNT_OPERATION_HANDLER_PROXY, _GtkMountOperationHandlerProxy))
#define _GTK_MOUNT_OPERATION_HANDLER_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), _GTK_TYPE_MOUNT_OPERATION_HANDLER_PROXY, _GtkMountOperationHandlerProxyClass))
#define _GTK_MOUNT_OPERATION_HANDLER_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), _GTK_TYPE_MOUNT_OPERATION_HANDLER_PROXY, _GtkMountOperationHandlerProxyClass))
#define _GTK_IS_MOUNT_OPERATION_HANDLER_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), _GTK_TYPE_MOUNT_OPERATION_HANDLER_PROXY))
#define _GTK_IS_MOUNT_OPERATION_HANDLER_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), _GTK_TYPE_MOUNT_OPERATION_HANDLER_PROXY))

typedef struct __GtkMountOperationHandlerProxy _GtkMountOperationHandlerProxy;
typedef struct __GtkMountOperationHandlerProxyClass _GtkMountOperationHandlerProxyClass;
typedef struct __GtkMountOperationHandlerProxyPrivate _GtkMountOperationHandlerProxyPrivate;

struct __GtkMountOperationHandlerProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  _GtkMountOperationHandlerProxyPrivate *priv;
};

struct __GtkMountOperationHandlerProxyClass
{
  GDBusProxyClass parent_class;
};

GType _gtk_mount_operation_handler_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (_GtkMountOperationHandlerProxy, g_object_unref)
#endif

void _gtk_mount_operation_handler_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
_GtkMountOperationHandler *_gtk_mount_operation_handler_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
_GtkMountOperationHandler *_gtk_mount_operation_handler_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void _gtk_mount_operation_handler_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
_GtkMountOperationHandler *_gtk_mount_operation_handler_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
_GtkMountOperationHandler *_gtk_mount_operation_handler_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define _GTK_TYPE_MOUNT_OPERATION_HANDLER_SKELETON (_gtk_mount_operation_handler_skeleton_get_type ())
#define _GTK_MOUNT_OPERATION_HANDLER_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), _GTK_TYPE_MOUNT_OPERATION_HANDLER_SKELETON, _GtkMountOperationHandlerSkeleton))
#define _GTK_MOUNT_OPERATION_HANDLER_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), _GTK_TYPE_MOUNT_OPERATION_HANDLER_SKELETON, _GtkMountOperationHandlerSkeletonClass))
#define _GTK_MOUNT_OPERATION_HANDLER_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), _GTK_TYPE_MOUNT_OPERATION_HANDLER_SKELETON, _GtkMountOperationHandlerSkeletonClass))
#define _GTK_IS_MOUNT_OPERATION_HANDLER_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), _GTK_TYPE_MOUNT_OPERATION_HANDLER_SKELETON))
#define _GTK_IS_MOUNT_OPERATION_HANDLER_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), _GTK_TYPE_MOUNT_OPERATION_HANDLER_SKELETON))

typedef struct __GtkMountOperationHandlerSkeleton _GtkMountOperationHandlerSkeleton;
typedef struct __GtkMountOperationHandlerSkeletonClass _GtkMountOperationHandlerSkeletonClass;
typedef struct __GtkMountOperationHandlerSkeletonPrivate _GtkMountOperationHandlerSkeletonPrivate;

struct __GtkMountOperationHandlerSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  _GtkMountOperationHandlerSkeletonPrivate *priv;
};

struct __GtkMountOperationHandlerSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType _gtk_mount_operation_handler_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (_GtkMountOperationHandlerSkeleton, g_object_unref)
#endif

_GtkMountOperationHandler *_gtk_mount_operation_handler_skeleton_new (void);


G_END_DECLS

#endif /* __GTKDBUSGENERATED_H__ */
