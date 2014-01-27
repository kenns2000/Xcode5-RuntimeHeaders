/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEAssistant.h"

@class NSArray, NSString;

@interface IDECDDataModelVersionAssistant : IDEAssistant
{
    NSString *versionName;
    NSArray *modelNames;
    NSString *selectedModel;
    BOOL canFinish;
}

@property BOOL canFinish; // @synthesize canFinish;
@property(copy) NSString *selectedModel; // @synthesize selectedModel;
@property(copy) NSArray *modelNames; // @synthesize modelNames;
@property(copy) NSString *versionName; // @synthesize versionName;
- (void).cxx_destruct;
- (void)finishWithCompletionBlock:(id)arg1;
- (void)setPathForSelectedModel;
- (void)setPathForCloneModel;
- (BOOL)alwaysShowFinish;
- (BOOL)canGoForward;
- (BOOL)canGoBack;
- (void)viewDidInstall;
- (id)availableModelsAtPath:(id)arg1;
- (long long)destinationIndex;
- (id)destinationGroup;
- (id)documentFilePath;

@end
