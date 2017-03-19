// -*- c++ -*-
// Generated by gmmproc 2.46.2 -- DO NOT MODIFY!
#ifndef _GIOMM_TLSCERTIFICATE_H
#define _GIOMM_TLSCERTIFICATE_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2012 The giomm Development Team
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

#include <glibmm/object.h>
#include <giomm/enums.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GTlsCertificate GTlsCertificate;
typedef struct _GTlsCertificateClass GTlsCertificateClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{ class TlsCertificate_Class; } // namespace Gio
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Glib
{

// Forward declaration.
class ByteArray;

}

namespace Gio
{

class SocketConnectable;

/** TlsCertificate - TLS certificate.
 * A certificate used for TLS authentication and encryption. This can represent
 * either a certificate only (eg, the certificate received by a client from a
 * server), or the combination of a certificate and a private key (which is
 * needed when acting as a TlsServerConnection).
 * @newin{2,36}
 */

class TlsCertificate : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef TlsCertificate CppObjectType;
  typedef TlsCertificate_Class CppClassType;
  typedef GTlsCertificate BaseObjectType;
  typedef GTlsCertificateClass BaseClassType;

  // noncopyable
  TlsCertificate(const TlsCertificate&) = delete;
  TlsCertificate& operator=(const TlsCertificate&) = delete;

private:  friend class TlsCertificate_Class;
  static CppClassType tlscertificate_class_;

protected:
  explicit TlsCertificate(const Glib::ConstructParams& construct_params);
  explicit TlsCertificate(GTlsCertificate* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  TlsCertificate(TlsCertificate&& src) noexcept;
  TlsCertificate& operator=(TlsCertificate&& src) noexcept;

  virtual ~TlsCertificate() noexcept;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GTlsCertificate*       gobj()       { return reinterpret_cast<GTlsCertificate*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GTlsCertificate* gobj() const { return reinterpret_cast<GTlsCertificate*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GTlsCertificate* gobj_copy();

private:


protected:
    explicit TlsCertificate(const std::string& data, gssize length);

    explicit TlsCertificate(const std::string& file);

    explicit TlsCertificate(const std::string& cert_file, const std::string& key_file);


public:
  
  /** Creates a TlsCertificate from the PEM-encoded data in @a data. If
   *  @a data includes both a certificate and a private key, then the
   * returned certificate will include the private key data as well. (See
   * the TlsCertificate::property_private_key_pem() property for information about
   * supported formats.)
   * 
   * The returned certificate will be the first certificate found in
   *  @a data. As of GLib 2.44, if @a data contains more certificates it will
   * try to load a certificate chain. All certificates will be verified in
   * the order found (top-level certificate should be the last one in the
   * file) and the TlsCertificate::property_issuer() property of each certificate
   * will be set accordingly if the verification succeeds. If any
   * certificate in the chain cannot be verified, the first certificate in
   * the file will still be returned.
   * 
   * @newin{2,28}
   * 
   * @param data PEM-encoded certificate data.
   * @param length The length of @a data, or -1 if it's 0-terminated.
   * @return The new certificate, or <tt>0</tt> if @a data is invalid.
   */

  static Glib::RefPtr<TlsCertificate>
    create_from_pem(const std::string& data, gssize length = -1);

  
  /** Creates a TlsCertificate from the PEM-encoded data in @a file. The
   * returned certificate will be the first certificate found in @a file. As
   * of GLib 2.44, if @a file contains more certificates it will try to load
   * a certificate chain. All certificates will be verified in the order
   * found (top-level certificate should be the last one in the file) and
   * the TlsCertificate::property_issuer() property of each certificate will be set
   * accordingly if the verification succeeds. If any certificate in the
   * chain cannot be verified, the first certificate in the file will
   * still be returned.
   * 
   * If @a file cannot be read or parsed, the function will return <tt>0</tt> and
   * set @a error. Otherwise, this behaves like
   * g_tls_certificate_new_from_pem().
   * 
   * @newin{2,28}
   * 
   * @param file File containing a PEM-encoded certificate to import.
   * @return The new certificate, or <tt>0</tt> on error.
   */

  
  static Glib::RefPtr<TlsCertificate> create(const std::string& file);


  /** Creates a TlsCertificate from the PEM-encoded data in @a cert_file
   * and @a key_file. The returned certificate will be the first certificate
   * found in @a cert_file. As of GLib 2.44, if @a cert_file contains more
   * certificates it will try to load a certificate chain. All
   * certificates will be verified in the order found (top-level
   * certificate should be the last one in the file) and the
   * TlsCertificate::property_issuer() property of each certificate will be set
   * accordingly if the verification succeeds. If any certificate in the
   * chain cannot be verified, the first certificate in the file will
   * still be returned.
   * 
   * If either file cannot be read or parsed, the function will return
   * <tt>0</tt> and set @a error. Otherwise, this behaves like
   * g_tls_certificate_new_from_pem().
   * 
   * @newin{2,28}
   * 
   * @param cert_file File containing one or more PEM-encoded certificates to
   * import.
   * @param key_file File containing a PEM-encoded private key to import.
   * @return The new certificate, or <tt>0</tt> on error.
   */

  
  static Glib::RefPtr<TlsCertificate> create(const std::string& cert_file, const std::string& key_file);


  /** Creates one or more TlsCertificates from the PEM-encoded
   * data in @a file. If @a file cannot be read or parsed, the function will
   * return <tt>0</tt> and set @a error. If @a file does not contain any
   * PEM-encoded certificates, this will return an empty list and not
   * set @a error.
   * 
   * @newin{2,28}
   * 
   * @param file File containing PEM-encoded certificates to import.
   * @return A
   * List containing TlsCertificate objects. You must free the list
   * and its contents when you are done with it.
   */
  static std::vector< Glib::RefPtr<TlsCertificate> > create_list_from_file(const std::string& file);

  
  /** Gets the TlsCertificate representing @a cert's issuer, if known
   * 
   * @newin{2,28}
   * 
   * @return The certificate of @a cert's issuer,
   * or <tt>0</tt> if @a cert is self-signed or signed with an unknown
   * certificate.
   */
  Glib::RefPtr<TlsCertificate> get_issuer();
  
  /** Gets the TlsCertificate representing @a cert's issuer, if known
   * 
   * @newin{2,28}
   * 
   * @return The certificate of @a cert's issuer,
   * or <tt>0</tt> if @a cert is self-signed or signed with an unknown
   * certificate.
   */
  Glib::RefPtr<const TlsCertificate> get_issuer() const;

  
  /** This verifies @a cert and returns a set of TlsCertificateFlags
   * indicating any problems found with it. This can be used to verify a
   * certificate outside the context of making a connection, or to
   * check a certificate against a CA that is not part of the system
   * CA database.
   * 
   * If @a identity is not <tt>0</tt>, @a cert's name(s) will be compared against
   * it, and TLS_CERTIFICATE_BAD_IDENTITY will be set in the return
   * value if it does not match. If @a identity is <tt>0</tt>, that bit will
   * never be set in the return value.
   * 
   * If @a trusted_ca is not <tt>0</tt>, then @a cert (or one of the certificates
   * in its chain) must be signed by it, or else
   * TLS_CERTIFICATE_UNKNOWN_CA will be set in the return value. If
   *  @a trusted_ca is <tt>0</tt>, that bit will never be set in the return
   * value.
   * 
   * (All other TlsCertificateFlags values will always be set or unset
   * as appropriate.)
   * 
   * @newin{2,28}
   * 
   * @param identity The expected peer identity.
   * @param trusted_ca The certificate of a trusted authority.
   * @return The appropriate TlsCertificateFlags.
   */
  TlsCertificateFlags verify(const Glib::RefPtr<const SocketConnectable>& identity, const Glib::RefPtr<const TlsCertificate>& trusted_ca) const;

  /// A verify() convenience overload.
  TlsCertificateFlags verify(const Glib::RefPtr<const SocketConnectable>& identity) const;

  /// A verify() convenience overload.
  TlsCertificateFlags verify(const Glib::RefPtr<const TlsCertificate>& trusted_ca) const;

  /// A verify() convenience overload.
  TlsCertificateFlags verify() const;
  
  /** Check if two TlsCertificate objects represent the same certificate.
   * The raw DER byte data of the two certificates are checked for equality.
   * This has the effect that two certificates may compare equal even if
   * their TlsCertificate::property_issuer(), TlsCertificate::property_private_key(), or
   * TlsCertificate::property_private_key_pem() properties differ.
   * 
   * @newin{2,34}
   * 
   * @param cert_two Second certificate to compare.
   * @return Whether the same or not.
   */
  bool is_same(const Glib::RefPtr<const TlsCertificate>& cert_two) const;

  /** The DER (binary) encoded representation of the certificate.
   * This property and the TlsCertificate::property_certificate_pem() property
   * represent the same data, just in different forms.
   * 
   * @newin{2,28}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Glib::ByteArray> > property_certificate() const;


  /** The PEM (ASCII) encoded representation of the certificate.
   * This property and the TlsCertificate::property_certificate()
   * property represent the same data, just in different forms.
   * 
   * @newin{2,28}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< std::string > property_certificate_pem() const;


  /** A TlsCertificate representing the entity that issued this
   * certificate. If <tt>0</tt>, this means that the certificate is either
   * self-signed, or else the certificate of the issuer is not
   * available.
   * 
   * @newin{2,28}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<TlsCertificate> > property_issuer() const;


  // Write-only and construct-only
  //_WRAP_PROPERTY("private-key", Glib::RefPtr<Glib::ByteArray>)

  // Write-only and construct-only
  //_WRAP_PROPERTY("private-key-pem", std::string)

 
    virtual TlsCertificateFlags verify_vfunc(const Glib::RefPtr<const SocketConnectable>& identity, const Glib::RefPtr<const TlsCertificate>& trusted_ca) const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gio


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gio::TlsCertificate
   */
  Glib::RefPtr<Gio::TlsCertificate> wrap(GTlsCertificate* object, bool take_copy = false);
}


#endif /* _GIOMM_TLSCERTIFICATE_H */

