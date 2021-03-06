/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDESourceControlOperationInfo.h>

@class DVTFilePath, IDESourceControlPatch, NSMutableDictionary, NSString;

@interface IDESourceControlApplyPatchOperationInfo : IDESourceControlOperationInfo
{
    IDESourceControlPatch *_patch;
    DVTFilePath *_rootFilePath;
    NSString *_baseRevisionIdentifier;
    NSString *_ancestorRevisionIdentifier;
    NSMutableDictionary *_pathsWithConflicts;
    NSMutableDictionary *_comparisonLocations;
    NSString *_currentRevisionIdentifier;
}

+ (id)operationInfosForPatch:(id)arg1 progressBlock:(id)arg2 completionBlock:(void)arg3;
@property(copy) NSString *ancestorRevisionIdentifier; // @synthesize ancestorRevisionIdentifier=_ancestorRevisionIdentifier;
@property(copy) NSString *baseRevisionIdentifier; // @synthesize baseRevisionIdentifier=_baseRevisionIdentifier;
@property(copy) NSString *currentRevisionIdentifier; // @synthesize currentRevisionIdentifier=_currentRevisionIdentifier;
@property(retain) IDESourceControlPatch *patch; // @synthesize patch=_patch;
@property(retain) DVTFilePath *rootFilePath; // @synthesize rootFilePath=_rootFilePath;
@property(retain) NSMutableDictionary *pathsWithConflicts; // @synthesize pathsWithConflicts=_pathsWithConflicts;
- (void).cxx_destruct;
- (id)comparisonDocumentLocationForFilePath:(id)arg1;
- (unsigned long long)conflictCount;
- (id)processInfoWithProgressBlock:(id)arg1 isSingleOperation:(void)arg2 completionBlock:(BOOL)arg3;

@end

