//
//  DoubanEntryEvent.h
//  douban-objective-c
//
//  Created by py on 3/19/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import "GDataEntryBase.h"

#import "DoubanLocation.h"
#import "DoubanAttribute.h"
#import "DoubanUID.h"
#import "DoubanSignature.h"

#undef _EXTERN
#undef _INITIALIZE_AS
#ifdef DOUBANPEOPLES_DEFINE_GLOBALS
#define _EXTERN
#define _INITIALIZE_AS(x) =x
#else
#define _EXTERN extern
#define _INITIALIZE_AS(x)
#endif

_EXTERN NSString* const kDoubanPeoplesDefaultServiceVersion _INITIALIZE_AS(@"2.0");


@interface DoubanEntryPeople : GDataEntryBase

+ (NSDictionary *)peoplesNamespaces;

+ (DoubanEntryPeople *)peopleEntry;

- (DoubanLocation *)location;
- (void)setLocation:(DoubanLocation*)obj;

- (DoubanUID *)uid;
- (void)setUid:(DoubanUID*)obj;

- (DoubanSignature *)signature;
- (void)setSignature:(DoubanSignature *)signature;

- (GDataLink *)imageLink;
- (GDataLink *)homepage;

@end
