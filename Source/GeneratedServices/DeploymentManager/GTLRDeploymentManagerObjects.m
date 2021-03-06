// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud Deployment Manager API (deploymentmanager/v2)
// Description:
//   Declares, configures, and deploys complex solutions on Google Cloud
//   Platform.
// Documentation:
//   https://cloud.google.com/deployment-manager/

#import "GTLRDeploymentManagerObjects.h"

// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_ConfigFile
//

@implementation GTLRDeploymentManager_ConfigFile
@dynamic content;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_Deployment
//

@implementation GTLRDeploymentManager_Deployment
@dynamic descriptionProperty, fingerprint, identifier, insertTime, labels,
         manifest, name, operation, selfLink, target, update;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"descriptionProperty" : @"description",
    @"identifier" : @"id"
  };
  return map;
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"labels" : [GTLRDeploymentManager_DeploymentLabelEntry class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_DeploymentLabelEntry
//

@implementation GTLRDeploymentManager_DeploymentLabelEntry
@dynamic key, value;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_DeploymentsCancelPreviewRequest
//

@implementation GTLRDeploymentManager_DeploymentsCancelPreviewRequest
@dynamic fingerprint;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_DeploymentsListResponse
//

@implementation GTLRDeploymentManager_DeploymentsListResponse
@dynamic deployments, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"deployments" : [GTLRDeploymentManager_Deployment class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"deployments";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_DeploymentsStopRequest
//

@implementation GTLRDeploymentManager_DeploymentsStopRequest
@dynamic fingerprint;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_DeploymentUpdate
//

@implementation GTLRDeploymentManager_DeploymentUpdate
@dynamic labels, manifest;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"labels" : [GTLRDeploymentManager_DeploymentUpdateLabelEntry class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_DeploymentUpdateLabelEntry
//

@implementation GTLRDeploymentManager_DeploymentUpdateLabelEntry
@dynamic key, value;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_ImportFile
//

@implementation GTLRDeploymentManager_ImportFile
@dynamic content, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_Manifest
//

@implementation GTLRDeploymentManager_Manifest
@dynamic config, expandedConfig, identifier, imports, insertTime, layout, name,
         selfLink;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"imports" : [GTLRDeploymentManager_ImportFile class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_ManifestsListResponse
//

@implementation GTLRDeploymentManager_ManifestsListResponse
@dynamic manifests, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"manifests" : [GTLRDeploymentManager_Manifest class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"manifests";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_Operation
//

@implementation GTLRDeploymentManager_Operation
@dynamic clientOperationId, creationTimestamp, descriptionProperty, endTime,
         error, httpErrorMessage, httpErrorStatusCode, identifier, insertTime,
         kind, name, operationType, progress, region, selfLink, startTime,
         status, statusMessage, targetId, targetLink, user, warnings,
         zoneProperty;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"descriptionProperty" : @"description",
    @"identifier" : @"id",
    @"zoneProperty" : @"zone"
  };
  return map;
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"warnings" : [GTLRDeploymentManager_OperationWarningsItem class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_OperationError
//

@implementation GTLRDeploymentManager_OperationError
@dynamic errors;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"errors" : [GTLRDeploymentManager_OperationErrorErrorsItem class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_OperationWarningsItem
//

@implementation GTLRDeploymentManager_OperationWarningsItem
@dynamic code, data, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"data" : [GTLRDeploymentManager_OperationWarningsItemDataItem class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_OperationErrorErrorsItem
//

@implementation GTLRDeploymentManager_OperationErrorErrorsItem
@dynamic code, location, message;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_OperationWarningsItemDataItem
//

@implementation GTLRDeploymentManager_OperationWarningsItemDataItem
@dynamic key, value;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_OperationsListResponse
//

@implementation GTLRDeploymentManager_OperationsListResponse
@dynamic nextPageToken, operations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"operations" : [GTLRDeploymentManager_Operation class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"operations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_Resource
//

@implementation GTLRDeploymentManager_Resource
@dynamic finalProperties, identifier, insertTime, manifest, name, properties,
         type, update, updateTime, url, warnings;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"warnings" : [GTLRDeploymentManager_ResourceWarningsItem class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_ResourceWarningsItem
//

@implementation GTLRDeploymentManager_ResourceWarningsItem
@dynamic code, data, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"data" : [GTLRDeploymentManager_ResourceWarningsItemDataItem class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_ResourceWarningsItemDataItem
//

@implementation GTLRDeploymentManager_ResourceWarningsItemDataItem
@dynamic key, value;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_ResourcesListResponse
//

@implementation GTLRDeploymentManager_ResourcesListResponse
@dynamic nextPageToken, resources;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"resources" : [GTLRDeploymentManager_Resource class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"resources";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_ResourceUpdate
//

@implementation GTLRDeploymentManager_ResourceUpdate
@dynamic error, finalProperties, intent, manifest, properties, state, warnings;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"warnings" : [GTLRDeploymentManager_ResourceUpdateWarningsItem class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_ResourceUpdateError
//

@implementation GTLRDeploymentManager_ResourceUpdateError
@dynamic errors;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"errors" : [GTLRDeploymentManager_ResourceUpdateErrorErrorsItem class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_ResourceUpdateWarningsItem
//

@implementation GTLRDeploymentManager_ResourceUpdateWarningsItem
@dynamic code, data, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"data" : [GTLRDeploymentManager_ResourceUpdateWarningsItemDataItem class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_ResourceUpdateErrorErrorsItem
//

@implementation GTLRDeploymentManager_ResourceUpdateErrorErrorsItem
@dynamic code, location, message;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_ResourceUpdateWarningsItemDataItem
//

@implementation GTLRDeploymentManager_ResourceUpdateWarningsItemDataItem
@dynamic key, value;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_TargetConfiguration
//

@implementation GTLRDeploymentManager_TargetConfiguration
@dynamic config, imports;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"imports" : [GTLRDeploymentManager_ImportFile class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_Type
//

@implementation GTLRDeploymentManager_Type
@dynamic identifier, insertTime, name, operation, selfLink;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDeploymentManager_TypesListResponse
//

@implementation GTLRDeploymentManager_TypesListResponse
@dynamic nextPageToken, types;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"types" : [GTLRDeploymentManager_Type class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"types";
}

@end
