/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAUISnippet.h"

@class SAMovieMovie;

@interface SAMovieMovieSnippet : SAUISnippet {
}
@property(assign, nonatomic) BOOL playTrailer;
@property(retain, nonatomic) SAMovieMovie* movie;
+(id)movieSnippetWithDictionary:(id)dictionary context:(id)context;
+(id)movieSnippet;
// declared property setter: -(void)setPlayTrailer:(BOOL)trailer;
// declared property getter: -(BOOL)playTrailer;
// declared property setter: -(void)setMovie:(id)movie;
// declared property getter: -(id)movie;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

