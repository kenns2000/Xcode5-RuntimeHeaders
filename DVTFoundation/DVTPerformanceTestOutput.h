/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface DVTPerformanceTestOutput : NSObject <NSCopying>
{
    NSString *_name;
    NSArray *_results;
}

@property(readonly) NSArray *results; // @synthesize results=_results;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 results:(id)arg2;

@end
