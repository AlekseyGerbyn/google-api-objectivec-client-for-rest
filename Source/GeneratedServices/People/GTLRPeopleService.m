// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google People API (people/v1)
// Description:
//   The Google People API service gives access to information about profiles
//   and contacts.
// Documentation:
//   https://developers.google.com/people/

#import "GTLRPeople.h"

// ----------------------------------------------------------------------------
// Authorization scopes

NSString * const kGTLRAuthScopePeopleContacts             = @"https://www.googleapis.com/auth/contacts";
NSString * const kGTLRAuthScopePeopleContactsReadonly     = @"https://www.googleapis.com/auth/contacts.readonly";
NSString * const kGTLRAuthScopePeoplePlusLogin            = @"https://www.googleapis.com/auth/plus.login";
NSString * const kGTLRAuthScopePeopleUserAddressesRead    = @"https://www.googleapis.com/auth/user.addresses.read";
NSString * const kGTLRAuthScopePeopleUserBirthdayRead     = @"https://www.googleapis.com/auth/user.birthday.read";
NSString * const kGTLRAuthScopePeopleUserEmailsRead       = @"https://www.googleapis.com/auth/user.emails.read";
NSString * const kGTLRAuthScopePeopleUserinfoEmail        = @"https://www.googleapis.com/auth/userinfo.email";
NSString * const kGTLRAuthScopePeopleUserinfoProfile      = @"https://www.googleapis.com/auth/userinfo.profile";
NSString * const kGTLRAuthScopePeopleUserPhonenumbersRead = @"https://www.googleapis.com/auth/user.phonenumbers.read";

// ----------------------------------------------------------------------------
//   GTLRPeopleService
//

@implementation GTLRPeopleService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://people.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint", @"pp" ];
  }
  return self;
}

@end
