/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsSupport/PBXTSLineStream.h>

#import "PBXTSCharacterStreamConsuming-Protocol.h"
#import "PBXTSStreamConsumerRetaining-Protocol.h"

@class NSMutableString;

@interface PBXTSLineBufferFilter : PBXTSLineStream <PBXTSCharacterStreamConsuming, PBXTSStreamConsumerRetaining>
{
    NSMutableString *_savedString;
    BOOL _coalesceLines;
}

- (void)stream:(id)arg1 processCharacters:(id)arg2;
- (void)streamDidEnd:(id)arg1;
- (void)setCoalescesCompleteLines:(BOOL)arg1;
- (BOOL)coalescesCompleteLines;
- (void)dealloc;
- (id)init;

@end

