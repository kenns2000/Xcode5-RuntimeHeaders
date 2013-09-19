/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTViewController.h"

#import "IDEFilePickerViewDelegate-Protocol.h"

@class DVTBorderedView, IDESourceControlStructureViewController, NSArray, NSMutableArray, NSProgressIndicator;

@interface IDESourceControlFilePickerViewController : DVTViewController <IDEFilePickerViewDelegate>
{
    DVTBorderedView *_borderedView;
    IDESourceControlStructureViewController *_filePickerViewController;
    NSProgressIndicator *_spinner;
    id _completionBlock;
    NSMutableArray *_loadingObservations;
    id _tmpItemToScrollToVisible;
    BOOL _needsToWaitForChildren;
    BOOL _onlySelectGroups;
    BOOL _hasLoadedRequiredChildren;
}

@property(nonatomic) BOOL hasLoadedRequiredChildren; // @synthesize hasLoadedRequiredChildren=_hasLoadedRequiredChildren;
@property(nonatomic) BOOL onlySelectGroups; // @synthesize onlySelectGroups=_onlySelectGroups;
@property(copy) id completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)choose:(id)arg1;
- (void)setRootRepository:(id)arg1 withExpandedItems:(id)arg2 visibleItem:(id)arg3;
- (void)scrollItemToVisible:(id)arg1;
@property(copy) NSArray *expandedItems;
- (void)setRootRepository:(id)arg1;
- (void)awakeFromNib;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
