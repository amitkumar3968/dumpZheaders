/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, WDDocument;

__attribute__((visibility("hidden")))
@interface WDCitationTable : XXUnknownSuperclass {
@private
	WDDocument* mDocument;
	NSMutableDictionary* mCitations;
}
-(void)addCitation:(id)citation forID:(id)anId;
-(id)citationFor:(id)aFor;
-(int)count;
-(id)initWithDocument:(id)document;
-(id)document;
-(void)dealloc;
@end

