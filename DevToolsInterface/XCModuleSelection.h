/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/XCSelection.h>

@interface XCModuleSelection : XCSelection
{
}

+ (int)validateSplitCloseForModule:(id)arg1;
+ (void)closeSplitOfModule:(id)arg1;
+ (int)validateSplitForModule:(id)arg1;
+ (void)splitModule:(id)arg1 alternate:(BOOL)arg2;
+ (void)clearSelection;
+ (void)postSelection;
- (int)validateMenuItem_revealInClassBrowser:(id)arg1;
- (void)revealInClassBrowser:(id)arg1;
- (int)validateMenuItem_dockingCloseSplitAction:(id)arg1;
- (void)dockingCloseSplitAction:(id)arg1;
- (int)validateMenuItem_dockingAlternateSplitAction:(id)arg1;
- (int)validateMenuItem_dockingSplitAction:(id)arg1;
- (void)dockingAlternateSplitAction:(id)arg1;
- (void)dockingSplitAction:(id)arg1;

@end

