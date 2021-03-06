/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSColor, NSFont, NSString, XCSyntaxTypeSpecification;

@interface XCTextColor : NSObject
{
    NSString *_colorName;
    short _colorId;
    NSColor *_color;
    NSFont *_font;
    XCSyntaxTypeSpecification *_syntaxType;
}

- (void)setFont:(id)arg1;
- (id)font;
- (id)syntaxType;
- (id)defaultColor;
- (void)setColor:(id)arg1;
- (id)color;
- (short)colorId;
- (id)name;
- (void)dealloc;
- (id)initWithName:(id)arg1 colorId:(short)arg2;

@end

