// Generated by Apple Swift version 3.1 (swiftlang-802.0.53 clang-802.0.42)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if defined(__has_attribute) && __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import QuartzCore;
@import UIKit;
@import Foundation;
@import SafariServices;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

SWIFT_CLASS("_TtC8TouchSDK16AnalyticsManager")
@interface AnalyticsManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface CALayer (SWIFT_EXTENSION(TouchSDK))
@end


SWIFT_CLASS("_TtC8TouchSDK4Chat")
@interface Chat : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull tenantId;
@property (nonatomic, copy) NSString * _Nonnull roomJid;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull backgroundMessagesCache;
- (BOOL)send:(NSString * _Nonnull)message id:(NSString * _Nonnull)id;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class Tenant;
@class NSCoder;
@class NSBundle;

/// The view controller which shows the chat window.
SWIFT_CLASS("_TtC8TouchSDK18ChatViewController")
@interface ChatViewController : UIViewController
@property (nonatomic, strong) Chat * _Nullable chat;
@property (nonatomic, copy) NSString * _Nullable titleText;
@property (nonatomic) Class _Nullable classForLoadingSpinner;
@property (nonatomic) Class _Nullable classForConnectingSpinner;
/// Join the chat regarding provided tenant
/// \param Tenant The request to have parameters applied.
///
///
/// returns:
/// None
- (void)join:(Tenant * _Nonnull)tenant;
/// Leave current chat
///
/// returns:
/// None
- (void)leave;
/// Sets the navigation item title
@property (nonatomic, copy) NSString * _Nullable title;
/// Initializes new instance
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Initializes new instance
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (void)viewWillLayoutSubviews;
- (void)updateViewConstraints;
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


@interface NSFileManager (SWIFT_EXTENSION(TouchSDK))
@end


@interface NSObject (SWIFT_EXTENSION(TouchSDK))
@end


SWIFT_CLASS("_TtC8TouchSDK14ServiceLocator")
@interface ServiceLocator : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) AnalyticsManager * _Nonnull analyticsManager;)
+ (AnalyticsManager * _Nonnull)analyticsManager SWIFT_WARN_UNUSED_RESULT;
+ (void)initialize;
+ (void)getTenants:(void (^ _Nonnull)(NSArray<Tenant *> * _Nonnull))cb;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSNumber;
@class TenantAddress;
@class TenantFaq;
@class TenantProperty;

SWIFT_CLASS("_TtC8TouchSDK6Tenant")
@interface Tenant : NSObject
@property (nonatomic, copy) NSString * _Nonnull id;
@property (nonatomic, copy) NSString * _Nonnull accountId;
@property (nonatomic, copy) NSString * _Nonnull tenantOrgName;
@property (nonatomic, copy) NSString * _Nullable contactEmail;
@property (nonatomic, copy) NSString * _Nonnull state;
@property (nonatomic, copy) NSString * _Nonnull shortDescription;
@property (nonatomic, copy) NSString * _Nonnull rosterJid;
@property (nonatomic, copy) NSString * _Nonnull tenantBotJid;
@property (nonatomic, copy) NSString * _Nullable category;
@property (nonatomic, strong) NSNumber * _Nullable sessionsCapacity;
@property (nonatomic, copy) NSArray<TenantAddress *> * _Nonnull tenantAddresses;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull tenantTags;
@property (nonatomic, copy) NSArray<TenantFaq *> * _Nonnull tenantFaqs;
@property (nonatomic, copy) NSArray<TenantProperty *> * _Nonnull tenantProperties;
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nonnull tenantResourcesUrls;
@property (nonatomic, copy) NSString * _Nonnull descriptions;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class TenantBusinessHour;
@class TenantPhone;

SWIFT_CLASS("_TtC8TouchSDK13TenantAddress")
@interface TenantAddress : NSObject
@property (nonatomic, copy) NSString * _Nonnull firstAddressLine;
@property (nonatomic, copy) NSString * _Nonnull secondAddressLine;
@property (nonatomic, copy) NSString * _Nonnull city;
@property (nonatomic, copy) NSString * _Nullable stateOrProvince;
@property (nonatomic, copy) NSString * _Nullable postalCode;
@property (nonatomic, copy) NSArray<TenantBusinessHour *> * _Nonnull businessHours;
@property (nonatomic, copy) NSArray<TenantPhone *> * _Nonnull phones;
- (NSString * _Nonnull)getFullAddress SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8TouchSDK18TenantBusinessHour")
@interface TenantBusinessHour : NSObject
@property (nonatomic, copy) NSString * _Nonnull dayOfWeek;
@property (nonatomic, copy) NSString * _Nonnull startWorkTime;
@property (nonatomic, copy) NSString * _Nonnull endWorkTime;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8TouchSDK9TenantFaq")
@interface TenantFaq : NSObject
@property (nonatomic, copy) NSString * _Nonnull question;
@property (nonatomic, copy) NSString * _Nonnull answer;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8TouchSDK11TenantPhone")
@interface TenantPhone : NSObject
@property (nonatomic, copy) NSString * _Nonnull phone;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8TouchSDK14TenantProperty")
@interface TenantProperty : NSObject
@property (nonatomic, copy) NSString * _Nonnull name;
@property (nonatomic, copy) NSString * _Nonnull value;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface UIAlertController (SWIFT_EXTENSION(TouchSDK))
@end

@class SFSafariViewController;

@interface UIApplication (SWIFT_EXTENSION(TouchSDK)) <SFSafariViewControllerDelegate>
@property (nonatomic) BOOL shouldUseInternalBrowser;
+ (void)initialize;
- (void)safariViewControllerDidFinishWithController:(SFSafariViewController * _Nonnull)controller;
@end


@interface UIColor (SWIFT_EXTENSION(TouchSDK))
@end


@interface UIFont (SWIFT_EXTENSION(TouchSDK))
@end


@interface UIImage (SWIFT_EXTENSION(TouchSDK))
@end


@interface UIResponder (SWIFT_EXTENSION(TouchSDK))
@end


@interface UITouch (SWIFT_EXTENSION(TouchSDK))
@end


@interface UIView (SWIFT_EXTENSION(TouchSDK))
@end


@interface UIView (SWIFT_EXTENSION(TouchSDK))
@end

#pragma clang diagnostic pop
