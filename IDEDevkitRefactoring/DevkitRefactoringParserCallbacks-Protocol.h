/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol DevkitRefactoringParserCallbacks
- (id)getStringAtFile:(id)arg1 line:(unsigned long long)arg2;
- (id)getStringAtLocation:(id)arg1 replacing:(id)arg2;
- (id)getStringAtLocation:(id)arg1;
- (id)memorySourceForFile:(const char *)arg1;
- (id)effectivePathForHeader:(id)arg1;
- (BOOL)beginHeader:(id)arg1;
- (void)addFunctionBody:(id)arg1;
- (id)allFunctionBodies;
- (id)allClassMethods;
- (id)allInstanceMethods;
- (BOOL)isPointInMacroBody:(id)arg1 checkBefore:(BOOL)arg2;
- (BOOL)isPointInMacro:(id)arg1 checkBefore:(BOOL)arg2;
- (BOOL)isLocationInMacro:(id)arg1;
- (id)macroDefinitionLocation:(const char *)arg1;
- (BOOL)isMacroDefined:(const char *)arg1;
- (id)nodeAtLocation:(id)arg1;
- (id)globalScope;
@end
