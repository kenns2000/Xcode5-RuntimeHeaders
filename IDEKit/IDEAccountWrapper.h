/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTDeveloperAccount, NSSet;

@interface IDEAccountWrapper : NSObject
{
    DVTDeveloperAccount *_account;
    NSSet *_teamObjectIDs;
}

@property(copy, nonatomic) NSSet *teamObjectIDs; // @synthesize teamObjectIDs=_teamObjectIDs;
@property(retain, nonatomic) DVTDeveloperAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;

@end

