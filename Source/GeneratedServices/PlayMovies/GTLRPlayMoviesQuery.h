// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Play Movies Partner API (playmoviespartner/v1)
// Description:
//   Gets the delivery status of titles for Google Play Movies Partners.
// Documentation:
//   https://developers.google.com/playmoviespartner/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the query classes' properties below.

// ----------------------------------------------------------------------------
// status

/** Value: "STATUS_APPROVED" */
GTLR_EXTERN NSString * const kGTLRPlayMoviesStatusStatusApproved;
/** Value: "STATUS_FAILED" */
GTLR_EXTERN NSString * const kGTLRPlayMoviesStatusStatusFailed;
/** Value: "STATUS_NOT_AVAILABLE" */
GTLR_EXTERN NSString * const kGTLRPlayMoviesStatusStatusNotAvailable;
/** Value: "STATUS_PROCESSING" */
GTLR_EXTERN NSString * const kGTLRPlayMoviesStatusStatusProcessing;
/** Value: "STATUS_UNFULFILLED" */
GTLR_EXTERN NSString * const kGTLRPlayMoviesStatusStatusUnfulfilled;
/** Value: "STATUS_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRPlayMoviesStatusStatusUnspecified;

// ----------------------------------------------------------------------------
// type

/** Value: "ARTWORK" */
GTLR_EXTERN NSString * const kGTLRPlayMoviesTypeArtwork;
/** Value: "AUDIO_20" */
GTLR_EXTERN NSString * const kGTLRPlayMoviesTypeAudio20;
/** Value: "AUDIO_51" */
GTLR_EXTERN NSString * const kGTLRPlayMoviesTypeAudio51;
/** Value: "COMPONENT_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRPlayMoviesTypeComponentTypeUnspecified;
/** Value: "METADATA" */
GTLR_EXTERN NSString * const kGTLRPlayMoviesTypeMetadata;
/** Value: "SUBTITLE" */
GTLR_EXTERN NSString * const kGTLRPlayMoviesTypeSubtitle;
/** Value: "VIDEO" */
GTLR_EXTERN NSString * const kGTLRPlayMoviesTypeVideo;

// ----------------------------------------------------------------------------
// Query Classes
//

/**
 *  Parent class for other Play Movies query classes.
 */
@interface GTLRPlayMoviesQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(copy, nullable) NSString *fields;

@end

/**
 *  Get an Avail given its avail group id and avail id.
 *
 *  Method: playmoviespartner.accounts.avails.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePlayMoviesPlaymoviesPartnerReadonly
 */
@interface GTLRPlayMoviesQuery_AccountsAvailsGet : GTLRPlayMoviesQuery
// Previous library name was
//   +[GTLQueryPlayMovies queryForAccountsAvailsGetWithaccountId:availId:]

/** REQUIRED. See _General rules_ for more information about this field. */
@property(copy, nullable) NSString *accountId;

/** REQUIRED. Avail ID. */
@property(copy, nullable) NSString *availId;

/**
 *  Fetches a @c GTLRPlayMovies_Avail.
 *
 *  Get an Avail given its avail group id and avail id.
 *
 *  @param accountId REQUIRED. See _General rules_ for more information about
 *    this field.
 *  @param availId REQUIRED. Avail ID.
 *
 *  @returns GTLRPlayMoviesQuery_AccountsAvailsGet
 */
+ (instancetype)queryWithAccountId:(NSString *)accountId
                           availId:(NSString *)availId;

@end

/**
 *  List Avails owned or managed by the partner. See _Authentication and
 *  Authorization rules_ and _List methods rules_ for more information about
 *  this method.
 *
 *  Method: playmoviespartner.accounts.avails.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePlayMoviesPlaymoviesPartnerReadonly
 */
@interface GTLRPlayMoviesQuery_AccountsAvailsList : GTLRPlayMoviesQuery
// Previous library name was
//   +[GTLQueryPlayMovies queryForAccountsAvailsListWithaccountId:]

/** REQUIRED. See _General rules_ for more information about this field. */
@property(copy, nullable) NSString *accountId;

/**
 *  Filter Avails that match a case-insensitive, partner-specific custom id.
 *  NOTE: this field is deprecated and will be removed on V2; `alt_ids` should
 *  be used instead.
 */
@property(copy, nullable) NSString *altId;

/**
 *  Filter Avails that match (case-insensitive) any of the given
 *  partner-specific custom ids.
 */
@property(strong, nullable) NSArray<NSString *> *altIds;

/** See _List methods rules_ for info about this field. */
@property(assign) NSInteger pageSize;

/** See _List methods rules_ for info about this field. */
@property(copy, nullable) NSString *pageToken;

/** See _List methods rules_ for info about this field. */
@property(strong, nullable) NSArray<NSString *> *pphNames;

/** See _List methods rules_ for info about this field. */
@property(strong, nullable) NSArray<NSString *> *studioNames;

/**
 *  Filter Avails that match (case-insensitive) any of the given country codes,
 *  using the "ISO 3166-1 alpha-2" format (examples: "US", "us", "Us").
 */
@property(strong, nullable) NSArray<NSString *> *territories;

/**
 *  Filter that matches Avails with a `title_internal_alias`,
 *  `series_title_internal_alias`, `season_title_internal_alias`, or
 *  `episode_title_internal_alias` that contains the given case-insensitive
 *  title.
 */
@property(copy, nullable) NSString *title;

/** Filter Avails that match any of the given `video_id`s. */
@property(strong, nullable) NSArray<NSString *> *videoIds;

/**
 *  Fetches a @c GTLRPlayMovies_ListAvailsResponse.
 *
 *  List Avails owned or managed by the partner. See _Authentication and
 *  Authorization rules_ and _List methods rules_ for more information about
 *  this method.
 *
 *  @param accountId REQUIRED. See _General rules_ for more information about
 *    this field.
 *
 *  @returns GTLRPlayMoviesQuery_AccountsAvailsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithAccountId:(NSString *)accountId;

@end

/**
 *  List Components owned or managed by the partner. See _Authentication and
 *  Authorization rules_ and _List methods rules_ for more information about
 *  this method.
 *
 *  Method: playmoviespartner.accounts.components.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePlayMoviesPlaymoviesPartnerReadonly
 */
@interface GTLRPlayMoviesQuery_AccountsComponentsList : GTLRPlayMoviesQuery
// Previous library name was
//   +[GTLQueryPlayMovies queryForAccountsComponentsListWithaccountId:]

/** REQUIRED. See _General rules_ for more information about this field. */
@property(copy, nullable) NSString *accountId;

/**
 *  Filter Components that match a case-insensitive, partner-specific
 *  Alternative Cut ID.
 */
@property(copy, nullable) NSString *altCutId;

/**
 *  Filter Components that match a case-insensitive partner-specific custom id.
 */
@property(copy, nullable) NSString *customId;

/** Filter Components that match a given edit-level EIDR. */
@property(copy, nullable) NSString *editLevelEidr;

/** Experience ID, as defined by Google. */
@property(copy, nullable) NSString *elId;

/**
 *  Filter Components that match a case-insensitive substring of the physical
 *  name of the delivered file.
 */
@property(copy, nullable) NSString *filename;

/** InventoryID available in Common Manifest. */
@property(copy, nullable) NSString *inventoryId;

/** See _List methods rules_ for info about this field. */
@property(assign) NSInteger pageSize;

/** See _List methods rules_ for info about this field. */
@property(copy, nullable) NSString *pageToken;

/** PlayableSequenceID available in Common Manifest. */
@property(copy, nullable) NSString *playableSequenceId;

/** See _List methods rules_ for info about this field. */
@property(strong, nullable) NSArray<NSString *> *pphNames;

/** PresentationID available in Common Manifest. */
@property(copy, nullable) NSString *presentationId;

/**
 *  Filter Components that match one of the given status.
 *
 *  Likely values:
 *    @arg @c kGTLRPlayMoviesStatusStatusUnspecified Value "STATUS_UNSPECIFIED"
 *    @arg @c kGTLRPlayMoviesStatusStatusApproved Value "STATUS_APPROVED"
 *    @arg @c kGTLRPlayMoviesStatusStatusFailed Value "STATUS_FAILED"
 *    @arg @c kGTLRPlayMoviesStatusStatusProcessing Value "STATUS_PROCESSING"
 *    @arg @c kGTLRPlayMoviesStatusStatusUnfulfilled Value "STATUS_UNFULFILLED"
 *    @arg @c kGTLRPlayMoviesStatusStatusNotAvailable Value
 *        "STATUS_NOT_AVAILABLE"
 */
@property(strong, nullable) NSArray<NSString *> *status;

/** See _List methods rules_ for info about this field. */
@property(strong, nullable) NSArray<NSString *> *studioNames;

/** Filter Components that match a given title-level EIDR. */
@property(copy, nullable) NSString *titleLevelEidr;

/**
 *  Fetches a @c GTLRPlayMovies_ListComponentsResponse.
 *
 *  List Components owned or managed by the partner. See _Authentication and
 *  Authorization rules_ and _List methods rules_ for more information about
 *  this method.
 *
 *  @param accountId REQUIRED. See _General rules_ for more information about
 *    this field.
 *
 *  @returns GTLRPlayMoviesQuery_AccountsComponentsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithAccountId:(NSString *)accountId;

@end

/**
 *  Get a Component given its id.
 *
 *  Method: playmoviespartner.accounts.components.type.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePlayMoviesPlaymoviesPartnerReadonly
 */
@interface GTLRPlayMoviesQuery_AccountsComponentsTypeGet : GTLRPlayMoviesQuery
// Previous library name was
//   +[GTLQueryPlayMovies queryForAccountsComponentsTypeGetWithaccountId:componentId:type:]

/** REQUIRED. See _General rules_ for more information about this field. */
@property(copy, nullable) NSString *accountId;

/** REQUIRED. Component ID. */
@property(copy, nullable) NSString *componentId;

/**
 *  REQUIRED. Component Type.
 *
 *  Likely values:
 *    @arg @c kGTLRPlayMoviesTypeComponentTypeUnspecified Value
 *        "COMPONENT_TYPE_UNSPECIFIED"
 *    @arg @c kGTLRPlayMoviesTypeVideo Value "VIDEO"
 *    @arg @c kGTLRPlayMoviesTypeAudio20 Value "AUDIO_20"
 *    @arg @c kGTLRPlayMoviesTypeAudio51 Value "AUDIO_51"
 *    @arg @c kGTLRPlayMoviesTypeSubtitle Value "SUBTITLE"
 *    @arg @c kGTLRPlayMoviesTypeArtwork Value "ARTWORK"
 *    @arg @c kGTLRPlayMoviesTypeMetadata Value "METADATA"
 */
@property(copy, nullable) NSString *type;

/**
 *  Fetches a @c GTLRPlayMovies_Component.
 *
 *  Get a Component given its id.
 *
 *  @param accountId REQUIRED. See _General rules_ for more information about
 *    this field.
 *  @param componentId REQUIRED. Component ID.
 *  @param type REQUIRED. Component Type.
 *
 *  Likely values for @c type:
 *    @arg @c kGTLRPlayMoviesTypeComponentTypeUnspecified Value
 *        "COMPONENT_TYPE_UNSPECIFIED"
 *    @arg @c kGTLRPlayMoviesTypeVideo Value "VIDEO"
 *    @arg @c kGTLRPlayMoviesTypeAudio20 Value "AUDIO_20"
 *    @arg @c kGTLRPlayMoviesTypeAudio51 Value "AUDIO_51"
 *    @arg @c kGTLRPlayMoviesTypeSubtitle Value "SUBTITLE"
 *    @arg @c kGTLRPlayMoviesTypeArtwork Value "ARTWORK"
 *    @arg @c kGTLRPlayMoviesTypeMetadata Value "METADATA"
 *
 *  @returns GTLRPlayMoviesQuery_AccountsComponentsTypeGet
 */
+ (instancetype)queryWithAccountId:(NSString *)accountId
                       componentId:(NSString *)componentId
                              type:(NSString *)type;

@end

/**
 *  Get an ExperienceLocale given its id. See _Authentication and Authorization
 *  rules_ and _Get methods rules_ for more information about this method.
 *
 *  Method: playmoviespartner.accounts.experienceLocales.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePlayMoviesPlaymoviesPartnerReadonly
 */
@interface GTLRPlayMoviesQuery_AccountsExperienceLocalesGet : GTLRPlayMoviesQuery
// Previous library name was
//   +[GTLQueryPlayMovies queryForAccountsExperienceLocalesGetWithaccountId:elId:]

/** REQUIRED. See _General rules_ for more information about this field. */
@property(copy, nullable) NSString *accountId;

/** REQUIRED. ExperienceLocale ID, as defined by Google. */
@property(copy, nullable) NSString *elId;

/**
 *  Fetches a @c GTLRPlayMovies_ExperienceLocale.
 *
 *  Get an ExperienceLocale given its id. See _Authentication and Authorization
 *  rules_ and _Get methods rules_ for more information about this method.
 *
 *  @param accountId REQUIRED. See _General rules_ for more information about
 *    this field.
 *  @param elId REQUIRED. ExperienceLocale ID, as defined by Google.
 *
 *  @returns GTLRPlayMoviesQuery_AccountsExperienceLocalesGet
 */
+ (instancetype)queryWithAccountId:(NSString *)accountId
                              elId:(NSString *)elId;

@end

/**
 *  List ExperienceLocales owned or managed by the partner. See _Authentication
 *  and Authorization rules_ and _List methods rules_ for more information about
 *  this method.
 *
 *  Method: playmoviespartner.accounts.experienceLocales.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePlayMoviesPlaymoviesPartnerReadonly
 */
@interface GTLRPlayMoviesQuery_AccountsExperienceLocalesList : GTLRPlayMoviesQuery
// Previous library name was
//   +[GTLQueryPlayMovies queryForAccountsExperienceLocalesListWithaccountId:]

/** REQUIRED. See _General rules_ for more information about this field. */
@property(copy, nullable) NSString *accountId;

/**
 *  Filter ExperienceLocales that match a case-insensitive, partner-specific
 *  Alternative Cut ID.
 */
@property(copy, nullable) NSString *altCutId;

/**
 *  Filter ExperienceLocales that match a case-insensitive, partner-specific
 *  custom id.
 */
@property(copy, nullable) NSString *customId;

/** Filter ExperienceLocales that match a given edit-level EIDR. */
@property(copy, nullable) NSString *editLevelEidr;

/** See _List methods rules_ for info about this field. */
@property(assign) NSInteger pageSize;

/** See _List methods rules_ for info about this field. */
@property(copy, nullable) NSString *pageToken;

/** See _List methods rules_ for info about this field. */
@property(strong, nullable) NSArray<NSString *> *pphNames;

/**
 *  Filter ExperienceLocales that match one of the given status.
 *
 *  Likely values:
 *    @arg @c kGTLRPlayMoviesStatusStatusUnspecified Value "STATUS_UNSPECIFIED"
 *    @arg @c kGTLRPlayMoviesStatusStatusApproved Value "STATUS_APPROVED"
 *    @arg @c kGTLRPlayMoviesStatusStatusFailed Value "STATUS_FAILED"
 *    @arg @c kGTLRPlayMoviesStatusStatusProcessing Value "STATUS_PROCESSING"
 *    @arg @c kGTLRPlayMoviesStatusStatusUnfulfilled Value "STATUS_UNFULFILLED"
 *    @arg @c kGTLRPlayMoviesStatusStatusNotAvailable Value
 *        "STATUS_NOT_AVAILABLE"
 */
@property(strong, nullable) NSArray<NSString *> *status;

/** See _List methods rules_ for info about this field. */
@property(strong, nullable) NSArray<NSString *> *studioNames;

/** Filter ExperienceLocales that match a given title-level EIDR. */
@property(copy, nullable) NSString *titleLevelEidr;

/**
 *  Fetches a @c GTLRPlayMovies_ListExperienceLocalesResponse.
 *
 *  List ExperienceLocales owned or managed by the partner. See _Authentication
 *  and Authorization rules_ and _List methods rules_ for more information about
 *  this method.
 *
 *  @param accountId REQUIRED. See _General rules_ for more information about
 *    this field.
 *
 *  @returns GTLRPlayMoviesQuery_AccountsExperienceLocalesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithAccountId:(NSString *)accountId;

@end

/**
 *  Get an Order given its id. See _Authentication and Authorization rules_ and
 *  _Get methods rules_ for more information about this method.
 *
 *  Method: playmoviespartner.accounts.orders.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePlayMoviesPlaymoviesPartnerReadonly
 */
@interface GTLRPlayMoviesQuery_AccountsOrdersGet : GTLRPlayMoviesQuery
// Previous library name was
//   +[GTLQueryPlayMovies queryForAccountsOrdersGetWithaccountId:orderId:]

/** REQUIRED. See _General rules_ for more information about this field. */
@property(copy, nullable) NSString *accountId;

/** REQUIRED. Order ID. */
@property(copy, nullable) NSString *orderId;

/**
 *  Fetches a @c GTLRPlayMovies_Order.
 *
 *  Get an Order given its id. See _Authentication and Authorization rules_ and
 *  _Get methods rules_ for more information about this method.
 *
 *  @param accountId REQUIRED. See _General rules_ for more information about
 *    this field.
 *  @param orderId REQUIRED. Order ID.
 *
 *  @returns GTLRPlayMoviesQuery_AccountsOrdersGet
 */
+ (instancetype)queryWithAccountId:(NSString *)accountId
                           orderId:(NSString *)orderId;

@end

/**
 *  List Orders owned or managed by the partner. See _Authentication and
 *  Authorization rules_ and _List methods rules_ for more information about
 *  this method.
 *
 *  Method: playmoviespartner.accounts.orders.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePlayMoviesPlaymoviesPartnerReadonly
 */
@interface GTLRPlayMoviesQuery_AccountsOrdersList : GTLRPlayMoviesQuery
// Previous library name was
//   +[GTLQueryPlayMovies queryForAccountsOrdersListWithaccountId:]

/** REQUIRED. See _General rules_ for more information about this field. */
@property(copy, nullable) NSString *accountId;

/**
 *  Filter Orders that match a case-insensitive, partner-specific custom id.
 */
@property(copy, nullable) NSString *customId;

/**
 *  Filter that matches Orders with a `name`, `show`, `season` or `episode` that
 *  contains the given case-insensitive name.
 */
@property(copy, nullable) NSString *name;

/** See _List methods rules_ for info about this field. */
@property(assign) NSInteger pageSize;

/** See _List methods rules_ for info about this field. */
@property(copy, nullable) NSString *pageToken;

/** See _List methods rules_ for info about this field. */
@property(strong, nullable) NSArray<NSString *> *pphNames;

/**
 *  Filter Orders that match one of the given status.
 *
 *  Likely values:
 *    @arg @c kGTLRPlayMoviesStatusStatusUnspecified Value "STATUS_UNSPECIFIED"
 *    @arg @c kGTLRPlayMoviesStatusStatusApproved Value "STATUS_APPROVED"
 *    @arg @c kGTLRPlayMoviesStatusStatusFailed Value "STATUS_FAILED"
 *    @arg @c kGTLRPlayMoviesStatusStatusProcessing Value "STATUS_PROCESSING"
 *    @arg @c kGTLRPlayMoviesStatusStatusUnfulfilled Value "STATUS_UNFULFILLED"
 *    @arg @c kGTLRPlayMoviesStatusStatusNotAvailable Value
 *        "STATUS_NOT_AVAILABLE"
 */
@property(strong, nullable) NSArray<NSString *> *status;

/** See _List methods rules_ for info about this field. */
@property(strong, nullable) NSArray<NSString *> *studioNames;

/** Filter Orders that match any of the given `video_id`s. */
@property(strong, nullable) NSArray<NSString *> *videoIds;

/**
 *  Fetches a @c GTLRPlayMovies_ListOrdersResponse.
 *
 *  List Orders owned or managed by the partner. See _Authentication and
 *  Authorization rules_ and _List methods rules_ for more information about
 *  this method.
 *
 *  @param accountId REQUIRED. See _General rules_ for more information about
 *    this field.
 *
 *  @returns GTLRPlayMoviesQuery_AccountsOrdersList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithAccountId:(NSString *)accountId;

@end

/**
 *  Get a StoreInfo given its video id and country. See _Authentication and
 *  Authorization rules_ and _Get methods rules_ for more information about this
 *  method.
 *
 *  Method: playmoviespartner.accounts.storeInfos.country.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePlayMoviesPlaymoviesPartnerReadonly
 */
@interface GTLRPlayMoviesQuery_AccountsStoreInfosCountryGet : GTLRPlayMoviesQuery
// Previous library name was
//   +[GTLQueryPlayMovies queryForAccountsStoreInfosCountryGetWithaccountId:videoId:country:]

/** REQUIRED. See _General rules_ for more information about this field. */
@property(copy, nullable) NSString *accountId;

/** REQUIRED. Edit country. */
@property(copy, nullable) NSString *country;

/** REQUIRED. Video ID. */
@property(copy, nullable) NSString *videoId;

/**
 *  Fetches a @c GTLRPlayMovies_StoreInfo.
 *
 *  Get a StoreInfo given its video id and country. See _Authentication and
 *  Authorization rules_ and _Get methods rules_ for more information about this
 *  method.
 *
 *  @param accountId REQUIRED. See _General rules_ for more information about
 *    this field.
 *  @param videoId REQUIRED. Video ID.
 *  @param country REQUIRED. Edit country.
 *
 *  @returns GTLRPlayMoviesQuery_AccountsStoreInfosCountryGet
 */
+ (instancetype)queryWithAccountId:(NSString *)accountId
                           videoId:(NSString *)videoId
                           country:(NSString *)country;

@end

/**
 *  List StoreInfos owned or managed by the partner. See _Authentication and
 *  Authorization rules_ and _List methods rules_ for more information about
 *  this method.
 *
 *  Method: playmoviespartner.accounts.storeInfos.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePlayMoviesPlaymoviesPartnerReadonly
 */
@interface GTLRPlayMoviesQuery_AccountsStoreInfosList : GTLRPlayMoviesQuery
// Previous library name was
//   +[GTLQueryPlayMovies queryForAccountsStoreInfosListWithaccountId:]

/** REQUIRED. See _General rules_ for more information about this field. */
@property(copy, nullable) NSString *accountId;

/**
 *  Filter StoreInfos that match (case-insensitive) any of the given country
 *  codes, using the "ISO 3166-1 alpha-2" format (examples: "US", "us", "Us").
 */
@property(strong, nullable) NSArray<NSString *> *countries;

/** Filter StoreInfos that match any of the given `mid`s. */
@property(strong, nullable) NSArray<NSString *> *mids;

/**
 *  Filter that matches StoreInfos with a `name` or `show_name` that contains
 *  the given case-insensitive name.
 */
@property(copy, nullable) NSString *name;

/** See _List methods rules_ for info about this field. */
@property(assign) NSInteger pageSize;

/** See _List methods rules_ for info about this field. */
@property(copy, nullable) NSString *pageToken;

/** See _List methods rules_ for info about this field. */
@property(strong, nullable) NSArray<NSString *> *pphNames;

/** Filter StoreInfos that match any of the given `season_id`s. */
@property(strong, nullable) NSArray<NSString *> *seasonIds;

/** See _List methods rules_ for info about this field. */
@property(strong, nullable) NSArray<NSString *> *studioNames;

/**
 *  Filter StoreInfos that match a given `video_id`. NOTE: this field is
 *  deprecated and will be removed on V2; `video_ids` should be used instead.
 */
@property(copy, nullable) NSString *videoId;

/** Filter StoreInfos that match any of the given `video_id`s. */
@property(strong, nullable) NSArray<NSString *> *videoIds;

/**
 *  Fetches a @c GTLRPlayMovies_ListStoreInfosResponse.
 *
 *  List StoreInfos owned or managed by the partner. See _Authentication and
 *  Authorization rules_ and _List methods rules_ for more information about
 *  this method.
 *
 *  @param accountId REQUIRED. See _General rules_ for more information about
 *    this field.
 *
 *  @returns GTLRPlayMoviesQuery_AccountsStoreInfosList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithAccountId:(NSString *)accountId;

@end

NS_ASSUME_NONNULL_END