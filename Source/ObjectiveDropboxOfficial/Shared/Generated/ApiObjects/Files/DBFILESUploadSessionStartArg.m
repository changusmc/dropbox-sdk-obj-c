///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBFILESUploadSessionStartArg.h"
#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"

#pragma mark - API Object

@implementation DBFILESUploadSessionStartArg

#pragma mark - Constructors

- (instancetype)initWithClose:(NSNumber *)close {

  self = [super init];
  if (self) {
    _close = close ?: @NO;
  }
  return self;
}

- (instancetype)init {
  return [self initWithClose:nil];
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBFILESUploadSessionStartArgSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBFILESUploadSessionStartArgSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBFILESUploadSessionStartArgSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBFILESUploadSessionStartArgSerializer

+ (NSDictionary *)serialize:(DBFILESUploadSessionStartArg *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  jsonDict[@"close"] = valueObj.close;

  return jsonDict;
}

+ (DBFILESUploadSessionStartArg *)deserialize:(NSDictionary *)valueDict {
  NSNumber *close = valueDict[@"close"] ?: @NO;

  return [[DBFILESUploadSessionStartArg alloc] initWithClose:close];
}

@end