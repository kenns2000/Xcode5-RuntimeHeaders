/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class DVTMutableOrderedDictionary, NSDictionary, NSXMLElement;

@interface IBXMLCoderPerObjectState : NSObject <NSCopying>
{
    DVTMutableOrderedDictionary *delayedObjects;
    BOOL processingDelayedEncoding;
    NSXMLElement *currentXMLNode;
    long long nextGenericKey;
    NSDictionary *encodingSpecialCaseContext;
    id encodedParent;
}

@property(retain, nonatomic) DVTMutableOrderedDictionary *delayedObjects; // @synthesize delayedObjects;
@property(retain, nonatomic) id encodedParent; // @synthesize encodedParent;
@property BOOL processingDelayedEncoding; // @synthesize processingDelayedEncoding;
@property(retain, nonatomic) NSDictionary *encodingSpecialCaseContext; // @synthesize encodingSpecialCaseContext;
@property long long nextGenericKey; // @synthesize nextGenericKey;
@property(retain, nonatomic) NSXMLElement *currentXMLNode; // @synthesize currentXMLNode;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

