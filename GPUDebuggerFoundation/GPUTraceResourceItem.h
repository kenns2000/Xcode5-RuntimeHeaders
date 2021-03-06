/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GPUDebuggerFoundation/GPUTraceOutlineItem.h>

@class DYResourceObject, GPUStateMirror, NSMutableDictionary, NSString;

@interface GPUTraceResourceItem : GPUTraceOutlineItem
{
    BOOL _generatesThumbnail;
    unsigned int _type;
    unsigned int _objectID;
    DYResourceObject *_resourceObject;
    const void *_unrealizedResourceObject;
    id _displayAttributes;
    NSString *_thumbnailLabel;
    unsigned long long _contextID;
    unsigned long long _sharegroupID;
    NSMutableDictionary *_properties;
}

@property(readonly, nonatomic) NSMutableDictionary *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) unsigned long long sharegroupID; // @synthesize sharegroupID=_sharegroupID;
@property(readonly, nonatomic) unsigned long long contextID; // @synthesize contextID=_contextID;
@property(readonly, nonatomic) unsigned int objectID; // @synthesize objectID=_objectID;
@property(readonly, nonatomic) BOOL generatesThumbnail; // @synthesize generatesThumbnail=_generatesThumbnail;
@property(retain, nonatomic) NSString *thumbnailLabel; // @synthesize thumbnailLabel=_thumbnailLabel;
@property(retain, nonatomic) id displayAttributes; // @synthesize displayAttributes=_displayAttributes;
@property(readonly, nonatomic) const void *unrealizedResourceObject; // @synthesize unrealizedResourceObject=_unrealizedResourceObject;
@property(retain, nonatomic) DYResourceObject *resourceObject; // @synthesize resourceObject=_resourceObject;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)releaseRealizedResources;
- (id)realizeResource;
- (void)establishChildren;
@property(readonly, nonatomic) unsigned int functionIndex;
@property(readonly, nonatomic) GPUStateMirror *stateMirror;
- (id)associatedDrawItem;
- (id)associatedTraceItem;
- (id)parentResourceGroup;
- (void)primitiveInvalidate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithController:(id)arg1 parent:(id)arg2 objectID:(unsigned int)arg3 unrealizedResourceObject:(const void *)arg4 context:(unsigned long long)arg5 label:(id)arg6 type:(unsigned int)arg7;

@end

