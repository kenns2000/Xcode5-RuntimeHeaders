/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXSettingsModule.h>

@class PBXTarget;

@interface PBXTargetSettingsModule : PBXSettingsModule
{
    PBXTarget *_target;
    id _dataSource;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (BOOL)isNonJavaSettings;
- (BOOL)isJavaSettings;
- (void)willBeDeleted;
- (BOOL)canBeDeleted;
- (void)update;
- (id)project;
- (id)target;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 dataSource:(id)arg2;
- (id)initWithTarget:(id)arg1;

@end

