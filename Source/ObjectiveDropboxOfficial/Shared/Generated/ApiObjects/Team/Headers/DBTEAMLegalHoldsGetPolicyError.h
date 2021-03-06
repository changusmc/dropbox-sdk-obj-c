///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLegalHoldsGetPolicyError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `LegalHoldsGetPolicyError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLegalHoldsGetPolicyError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLegalHoldsGetPolicyErrorTag` enum type represents the possible
/// tag states with which the `DBTEAMLegalHoldsGetPolicyError` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMLegalHoldsGetPolicyErrorTag){
    /// There has been an unknown legal hold error.
    DBTEAMLegalHoldsGetPolicyErrorUnknownLegalHoldError,

    /// You don't have permissions to perform this action.
    DBTEAMLegalHoldsGetPolicyErrorInsufficientPermissions,

    /// (no description).
    DBTEAMLegalHoldsGetPolicyErrorOther,

    /// Legal hold policy does not exist for `id_` in
    /// `DBTEAMLegalHoldsGetPolicyArg`.
    DBTEAMLegalHoldsGetPolicyErrorLegalHoldPolicyNotFound,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLegalHoldsGetPolicyErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "unknown_legal_hold_error".
///
/// Description of the "unknown_legal_hold_error" tag state: There has been an
/// unknown legal hold error.
///
/// @return An initialized instance.
///
- (instancetype)initWithUnknownLegalHoldError;

///
/// Initializes union class with tag state of "insufficient_permissions".
///
/// Description of the "insufficient_permissions" tag state: You don't have
/// permissions to perform this action.
///
/// @return An initialized instance.
///
- (instancetype)initWithInsufficientPermissions;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

///
/// Initializes union class with tag state of "legal_hold_policy_not_found".
///
/// Description of the "legal_hold_policy_not_found" tag state: Legal hold
/// policy does not exist for `id_` in `DBTEAMLegalHoldsGetPolicyArg`.
///
/// @return An initialized instance.
///
- (instancetype)initWithLegalHoldPolicyNotFound;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value
/// "unknown_legal_hold_error".
///
/// @return Whether the union's current tag state has value
/// "unknown_legal_hold_error".
///
- (BOOL)isUnknownLegalHoldError;

///
/// Retrieves whether the union's current tag state has value
/// "insufficient_permissions".
///
/// @return Whether the union's current tag state has value
/// "insufficient_permissions".
///
- (BOOL)isInsufficientPermissions;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves whether the union's current tag state has value
/// "legal_hold_policy_not_found".
///
/// @return Whether the union's current tag state has value
/// "legal_hold_policy_not_found".
///
- (BOOL)isLegalHoldPolicyNotFound;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMLegalHoldsGetPolicyError` union.
///
@interface DBTEAMLegalHoldsGetPolicyErrorSerializer : NSObject

///
/// Serializes `DBTEAMLegalHoldsGetPolicyError` instances.
///
/// @param instance An instance of the `DBTEAMLegalHoldsGetPolicyError` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLegalHoldsGetPolicyError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLegalHoldsGetPolicyError *)instance;

///
/// Deserializes `DBTEAMLegalHoldsGetPolicyError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLegalHoldsGetPolicyError` API object.
///
/// @return An instantiation of the `DBTEAMLegalHoldsGetPolicyError` object.
///
+ (DBTEAMLegalHoldsGetPolicyError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
