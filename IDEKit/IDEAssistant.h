/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTViewController.h"

@class IDEAssistantContext, NSString, NSView;

@interface IDEAssistant : DVTViewController
{
    IDEAssistantContext *_assistantContext;
    NSString *_nextAssistantIdentifier;
}

+ (BOOL)wantsOverlayEffect;
@property(retain) NSString *nextAssistantIdentifier; // @synthesize nextAssistantIdentifier=_nextAssistantIdentifier;
@property(retain) IDEAssistantContext *assistantContext; // @synthesize assistantContext=_assistantContext;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)willGoNextOrFinish;
- (void)willResignCurrentAssistantInAssistantWindowController:(id)arg1;
@property(readonly) BOOL expandsAssistantView;
@property(readonly) NSView *sourceListView;
- (id)finishButtonTitle;
@property(readonly) NSString *assistantTitle;
- (void)finishWithCompletionBlock:(id)arg1;
@property(readonly) BOOL alwaysShowFinish;
@property(readonly) BOOL canCancel;
@property(readonly) BOOL canFinish;
@property(readonly) BOOL canGoBack;
@property(readonly) BOOL canGoForward;
- (BOOL)canBecomeMainViewController;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

