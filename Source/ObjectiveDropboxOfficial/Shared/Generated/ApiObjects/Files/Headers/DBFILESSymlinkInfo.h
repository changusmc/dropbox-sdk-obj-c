///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESSymlinkInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SymlinkInfo` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESSymlinkInfo : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The target this symlink points to.
@property (nonatomic, readonly, copy) NSString *target;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param target The target this symlink points to.
///
/// @return An initialized instance.
///
- (instancetype)initWithTarget:(NSString *)target;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SymlinkInfo` struct.
///
@interface DBFILESSymlinkInfoSerializer : NSObject

///
/// Serializes `DBFILESSymlinkInfo` instances.
///
/// @param instance An instance of the `DBFILESSymlinkInfo` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESSymlinkInfo` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESSymlinkInfo *)instance;

///
/// Deserializes `DBFILESSymlinkInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESSymlinkInfo` API object.
///
/// @return An instantiation of the `DBFILESSymlinkInfo` object.
///
+ (DBFILESSymlinkInfo *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
