/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol PBXProjectWatcherServerProtocol
- (void)removeProductSettingForKey:(bycopy id)arg1 inTarget:(bycopy id)arg2 ofProject:(bycopy id)arg3;
- (void)setProductSetting:(bycopy id)arg1 forKey:(bycopy id)arg2 inTarget:(bycopy id)arg3 ofProject:(bycopy id)arg4;
- (bycopy id)productSettingsForTarget:(bycopy id)arg1 ofProject:(bycopy id)arg2;
- (void)addGroupWithName:(bycopy id)arg1 path:(bycopy id)arg2 toProject:(bycopy id)arg3 nearFile:(bycopy id)arg4 preferredInsertionGroupName:(bycopy id)arg5;
- (void)addFiles:(bycopy id)arg1 toProject:(bycopy id)arg2 nearFile:(bycopy id)arg3 preferredInsertionGroupName:(bycopy id)arg4 addToTargets:(bycopy id)arg5 copyIntoGroupFolder:(BOOL)arg6 createGroupsRecursively:(BOOL)arg7 fileEncoding:(unsigned long long)arg8;
- (void)addFiles:(bycopy id)arg1 toProject:(bycopy id)arg2 nearFile:(bycopy id)arg3 preferredInsertionGroupName:(bycopy id)arg4 addToTargets:(bycopy id)arg5 copyIntoGroupFolder:(BOOL)arg6 createGroupsRecursively:(BOOL)arg7;
- (bycopy id)pathForFileWithName:(bycopy id)arg1 inProject:(bycopy id)arg2;
- (void)removeFileObserver:(byref id)arg1;
- (void)addFileObserver:(byref id)arg1 forFiles:(bycopy id)arg2;
- (bycopy id)canonicalNameOfSDKOfTarget:(bycopy id)arg1 inProject:(bycopy id)arg2;
- (bycopy id)builtProductsLocationOfTarget:(bycopy id)arg1 inProject:(bycopy id)arg2;
- (bycopy id)fullProductNameOfTarget:(bycopy id)arg1 inProject:(bycopy id)arg2;
- (bycopy id)nameOfTarget:(bycopy id)arg1 inProject:(bycopy id)arg2;
- (void)removeTargetFileObserver:(byref id)arg1;
- (void)addTargetFileObserver:(byref id)arg1 forDictionary:(bycopy id)arg2;
- (bycopy id)filesOfTypes:(bycopy id)arg1 inTarget:(bycopy id)arg2 ofProject:(bycopy id)arg3;
- (void)removeTargetObserver:(byref id)arg1;
- (void)addTargetObserver:(byref id)arg1 forProjects:(bycopy id)arg2;
- (bycopy id)activeTargetInProject:(bycopy id)arg1;
- (bycopy id)targetsInProject:(bycopy id)arg1 containingFile:(bycopy id)arg2;
- (bycopy id)targetsInProject:(bycopy id)arg1;
- (bycopy id)pathOfProject:(bycopy id)arg1;
- (bycopy id)nameOfProject:(bycopy id)arg1;
- (bycopy id)openProjectsAppropriateForFile:(bycopy id)arg1;
- (void)removeProjectFileObserver:(byref id)arg1;
- (void)addProjectFileObserver:(byref id)arg1 forDictionary:(bycopy id)arg2;
- (bycopy id)filesOfTypes:(bycopy id)arg1 inProject:(bycopy id)arg2;
- (void)removeOpenProjectObserver:(byref id)arg1;
- (void)addOpenProjectObserver:(byref id)arg1;
- (bycopy id)openProjectsContainingFile:(bycopy id)arg1;
- (bycopy id)openProjects;
@end

