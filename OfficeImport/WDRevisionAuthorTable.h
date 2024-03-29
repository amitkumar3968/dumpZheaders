/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class WDDocument, NSMutableArray;

__attribute__((visibility("hidden")))
@interface WDRevisionAuthorTable : XXUnknownSuperclass {
@private
	NSMutableArray* mAuthors;
	WDDocument* mDocument;
}
-(int)authorAddLookup:(id)lookup;
-(void)addAuthor:(id)author;
-(id)authorAt:(int)at;
-(int)authorCount;
-(id)authors;
-(void)dealloc;
-(id)initWithDocument:(id)document;
@end

