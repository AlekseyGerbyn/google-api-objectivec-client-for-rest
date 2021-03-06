// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Mirror API (mirror/v1)
// Description:
//   API for interacting with Glass users via the timeline.
// Documentation:
//   https://developers.google.com/glass

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRService.h"
#else
  #import "GTLRService.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: View your location
 *
 *  Value "https://www.googleapis.com/auth/glass.location"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeMirrorGlassLocation;
/**
 *  Authorization scope: View and manage your Glass timeline
 *
 *  Value "https://www.googleapis.com/auth/glass.timeline"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeMirrorGlassTimeline;

// ----------------------------------------------------------------------------
//   GTLRMirrorService
//

/**
 *  Service for executing Google Mirror API queries.
 *
 *  API for interacting with Glass users via the timeline.
 */
@interface GTLRMirrorService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRMirrorQuery.h. The query can the be sent with GTLRService's execute
// methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END
