/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDENavigatorOutlineView.h"

@interface IDEBatchFindLocationOutlineView : IDENavigatorOutlineView
{
    id _bindingHandler;
    BOOL _isEditingScope;
    id _editBlock;
    long long _rowBeingEdited;
}

@property BOOL isEditingScope; // @synthesize isEditingScope=_isEditingScope;
@property long long rowBeingEdited; // @synthesize rowBeingEdited=_rowBeingEdited;
@property(copy, nonatomic) id bindingHandler; // @synthesize bindingHandler=_bindingHandler;
@property(copy, nonatomic) id editBlock; // @synthesize editBlock=_editBlock;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)primitiveInvalidate;

@end
