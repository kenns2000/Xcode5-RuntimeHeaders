/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol iCloudClientConnectionDelegate <NSObject>

@optional
- (void)connection:(id)arg1 processInput:(const char *)arg2 length:(unsigned long long)arg3;
- (void)connection:(id)arg1 didCloseWithError:(id)arg2;
- (void)connection:(id)arg1 willCloseWithError:(id)arg2;
@end
