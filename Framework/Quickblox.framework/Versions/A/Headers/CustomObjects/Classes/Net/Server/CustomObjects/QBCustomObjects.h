//
//  QBCustomObjects.h
//  Quickblox
//
//  Created by IgorKh on 8/14/12.
//  Copyright (c) 2012 QuickBlox. All rights reserved.
//

/** QBCustomObjects class declaration. */
/** Overview */
/** This class is the main entry point to work with Quickblox Custom Objects module. */

@interface QBCustomObjects : QBBaseModule


#pragma mark -
#pragma mark Get Objects

/**
 Retrieve object with ID
 
 @param className Name of class
 @param ID Identifier of object to be retrieved
 @param delegate An object for callback, must adopt QBActionStatusDelegate protocol. The delegate is retained.  Upon finish of the request, result will be an instance of QBCOCustomObjectResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)objectWithClassName:(NSString *)className ID:(NSString *)ID delegate:(NSObject<QBActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)objectWithClassName:(NSString *)className ID:(NSString *)ID delegate:(NSObject<QBActionStatusDelegate> *)delegate context:(void *)context;


/**
 Retrieve objects with IDs
 
 @param className Name of class
 @param IDs Identifiers of objects to be retrieved
 @param delegate An object for callback, must adopt QBActionStatusDelegate protocol. The delegate is retained.  Upon finish of the request, result will be an instance of QBCOCustomObjectPagedResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)objectsWithClassName:(NSString *)className IDs:(NSArray *)IDs delegate:(NSObject<QBActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)objectsWithClassName:(NSString *)className IDs:(NSArray *)IDs delegate:(NSObject<QBActionStatusDelegate> *)delegate context:(void *)context;

/**
 Retrieve objects
 
 @param className Name of class
 @param delegate An object for callback, must adopt QBActionStatusDelegate protocol. The delegate is retained.  Upon finish of the request, result will be an instance of QBCOCustomObjectPagedResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)objectsWithClassName:(NSString *)className delegate:(NSObject<QBActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)objectsWithClassName:(NSString *)className delegate:(NSObject<QBActionStatusDelegate> *)delegate context:(void *)context;

/**
 Retrieve objects with extended Request
 
 @param className Name of class
 @param extendedRequest Extended set of request parameters
 @param delegate An object for callback, must adopt QBActionStatusDelegate protocol. The delegate is retained.  Upon finish of the request, result will be an instance of QBCOCustomObjectPagedResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)objectsWithClassName:(NSString *)className extendedRequest:(NSMutableDictionary *)extendedRequest delegate:(NSObject<QBActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)objectsWithClassName:(NSString *)className extendedRequest:(NSMutableDictionary *)extendedRequest delegate:(NSObject<QBActionStatusDelegate> *)delegate context:(void *)context;


#pragma mark -
#pragma mark Create Object

/**
 Create record
 
 @param object An instance of object that will be created
 @param delegate An object for callback, must adopt QBActionStatusDelegate protocol. The delegate is retained.  Upon finish of the request, result will be an instance of QBCOCustomObjectResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)createObject:(QBCOCustomObject *)object delegate:(NSObject<QBActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)createObject:(QBCOCustomObject *)object delegate:(NSObject<QBActionStatusDelegate> *)delegate context:(void *)context;


#pragma mark -
#pragma mark Multi Create

/**
 Create records
 
 @param objects An array of instances of objects that will be created
 @param className Name of class
 @param delegate An object for callback, must adopt QBActionStatusDelegate protocol. The delegate is retained.  Upon finish of the request, result will be an instance of QBCOCustomObjectPagedResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)createObjects:(NSArray *)objects className:(NSString *)className delegate:(NSObject<QBActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)createObjects:(NSArray *)objects className:(NSString *)className delegate:(NSObject<QBActionStatusDelegate> *)delegate context:(void *)context;


#pragma mark -
#pragma mark Update Object

/**
 Update record
 
 @param object An instance of object that will be updated
 @param delegate An object for callback, must adopt QBActionStatusDelegate protocol. The delegate is retained.  Upon finish of the request, result will be an instance of QBCOCustomObjectResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)updateObject:(QBCOCustomObject *)object delegate:(NSObject<QBActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)updateObject:(QBCOCustomObject *)object delegate:(NSObject<QBActionStatusDelegate> *)delegate context:(void *)context;


/**
 Update record with Special update operators
 
 @param object An instance of object that will be updated
 @param specialUpdateOperators Special update operators http://quickblox.com/developers/Custom_Objects#Special_update_operators
 @param delegate An object for callback, must adopt QBActionStatusDelegate protocol. The delegate is retained.  Upon finish of the request, result will be an instance of QBCOCustomObjectResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)updateObject:(QBCOCustomObject *)object specialUpdateOperators:(NSMutableDictionary *)specialUpdateOperators delegate:(NSObject<QBActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)updateObject:(QBCOCustomObject *)object specialUpdateOperators:(NSMutableDictionary *)specialUpdateOperators delegate:(NSObject<QBActionStatusDelegate> *)delegate context:(void *)context;


#pragma mark -
#pragma mark Multi Update

/**
 Update records
 
 @param objects An array of instances of objects that will be updated
 @param className Name of class
 @param delegate An object for callback, must adopt QBActionStatusDelegate protocol. The delegate is retained.  Upon finish of the request, result will be an instance of QBCOCustomObjectResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)updateObjects:(NSArray *)objects className:(NSString *)className delegate:(NSObject<QBActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)updateObjects:(NSArray *)objects className:(NSString *)className delegate:(NSObject<QBActionStatusDelegate> *)delegate context:(void *)context;


#pragma mark -
#pragma mark Delete Object

/**
 Delete object by identifier
 
 @param objectID ID of object to be removed.
 @param delegate An object for callback, must adopt QBActionStatusDelegate protocol. The delegate is retained.  Upon finish of the request, result will be an instance of Result class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)deleteObjectWithID:(NSString *)objectID className:(NSString *)className delegate:(NSObject<QBActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)deleteObjectWithID:(NSString *)objectID className:(NSString *)className delegate:(NSObject<QBActionStatusDelegate> *)delegate context:(void *)context;

/**
 Delete objects by IDs
 
 @param objectsIDs Array of IDs of objects to be removed.
 @param delegate An object for callback, must adopt QBActionStatusDelegate protocol. The delegate is retained.  Upon finish of the request, result will be an instance of QBCOMultiDeleteResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)deleteObjectsWithIDs:(NSArray *)objectsIDs className:(NSString *)className delegate:(NSObject<QBActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)deleteObjectsWithIDs:(NSArray *)objectsIDs className:(NSString *)className delegate:(NSObject<QBActionStatusDelegate> *)delegate context:(void *)context;


#pragma mark -
#pragma mark Permissions

/**
 Retrieve permissions for object with ID
 
 @param className Name of class
 @param ID Identifier of object which permissions will be retrieved
 @param delegate An object for callback, must adopt QBActionStatusDelegate protocol. The delegate is retained.  Upon finish of the request, result will be an instance of QBCOPermissionsResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)permissionsForObjectWithClassName:(NSString *)className ID:(NSString *)ID delegate:(NSObject<QBActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)permissionsForObjectWithClassName:(NSString *)className ID:(NSString *)ID delegate:(NSObject<QBActionStatusDelegate> *)delegate context:(void *)context;


#pragma mark -
#pragma mark Files

/**
 Upload file
 
 @param file File
 @param className Name of class
 @param objectID Identifier of object to which file will be uploaded
 @param fileFieldName Name of file field
 @param delegate An object for callback, must adopt QBActionStatusDelegate protocol. The delegate is retained.  Upon finish of the request, result will be an instance of Result class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)uploadFile:(QBCOFile *)file className:(NSString *)className objectID:(NSString *)objectID fileFieldName:(NSString *)fileFieldName delegate:(NSObject<QBActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)uploadFile:(QBCOFile *)file className:(NSString *)className objectID:(NSString *)objectID fileFieldName:(NSString *)fileFieldName delegate:(NSObject<QBActionStatusDelegate> *)delegate context:(void *)context;

/**
 Download file
 
 @param className Name of class
 @param objectID Identifier of object which file will be downloaded
 @param fileFieldName Name of file field
 @param delegate An object for callback, must adopt QBActionStatusDelegate protocol. The delegate is retained.  Upon finish of the request, result will be an instance of QBCOFileDownloadResult class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)downloadFileFromClassName:(NSString *)className objectID:(NSString *)objectID fileFieldName:(NSString *)fileFieldName delegate:(NSObject<QBActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)downloadFileFromClassName:(NSString *)className objectID:(NSString *)objectID fileFieldName:(NSString *)fileFieldName delegate:(NSObject<QBActionStatusDelegate> *)delegate context:(void *)context;


/**
 Delete file
 
 @param className Name of class
 @param objectID Identifier of object form which file will be deleted
 @param fileFieldName Name of file field
 @param delegate An object for callback, must adopt QBActionStatusDelegate protocol. The delegate is retained.  Upon finish of the request, result will be an instance of Result class.
 @return An instance, which conforms Cancelable protocol. Use this instance to cancel the operation.
 */
+ (NSObject<Cancelable> *)deleteFileFromClassName:(NSString *)className objectID:(NSString *)objectID fileFieldName:(NSString *)fileFieldName delegate:(NSObject<QBActionStatusDelegate> *)delegate;
+ (NSObject<Cancelable> *)deleteFileFromClassName:(NSString *)className objectID:(NSString *)objectID fileFieldName:(NSString *)fileFieldName delegate:(NSObject<QBActionStatusDelegate> *)delegate context:(void *)context;

@end
