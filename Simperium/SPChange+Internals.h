//
//  SPChange+Internals.h
//  Simperium
//
//  Created by Jorge Leandro Perez on 12/9/14.
//  Copyright (c) 2014 Simperium. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SPChange.h"



#pragma mark ====================================================================================
#pragma mark Constants
#pragma mark ====================================================================================

static NSString * const CH_KEY              = @"id";
static NSString * const CH_ADD              = @"+";
static NSString * const CH_REMOVE           = @"-";
static NSString * const CH_MODIFY           = @"M";
static NSString * const CH_OPERATION        = @"o";
static NSString * const CH_VALUE            = @"v";
static NSString * const CH_START_VERSION    = @"sv";
static NSString * const CH_END_VERSION      = @"ev";
static NSString * const CH_CHANGE_VERSION   = @"cv";
static NSString * const CH_LOCAL_ID         = @"ccid";
static NSString * const CH_CLIENT_ID        = @"clientid";
static NSString * const CH_ERROR            = @"error";
static NSString * const CH_DATA             = @"d";
static NSString * const CH_EMPTY            = @"EMPTY";


#pragma mark ====================================================================================
#pragma mark SPChange: Private Properties
#pragma mark ====================================================================================

@interface SPChange (Internals)

@property (nonatomic, strong, readwrite) NSString       *clientID;
@property (nonatomic, strong, readwrite) NSString       *simperiumKey;
@property (nonatomic, strong, readwrite) NSString       *changeID;
@property (nonatomic, strong, readwrite) NSString       *changeVersion;

@property (nonatomic, strong, readwrite) NSString       *startVersion;
@property (nonatomic, strong, readwrite) NSString       *endVersion;

@property (nonatomic, strong, readwrite) NSString       *operation;
@property (nonatomic, strong, readwrite) NSDictionary   *value;
@property (nonatomic, strong, readwrite) NSDictionary   *data;
@property (nonatomic, strong, readwrite) NSNumber       *errorCode;

@property (nonatomic, strong, readwrite) NSString       *namespacelessKey;

@end
