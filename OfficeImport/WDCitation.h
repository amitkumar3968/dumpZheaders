/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, WDDocument, NSMutableArray;

__attribute__((visibility("hidden")))
@interface WDCitation : XXUnknownSuperclass {
@private
	WDDocument* mDocument;
	NSString* mSourceType;
	NSMutableArray* mAuthors;
	NSString* mYear;
	NSMutableArray* mTitles;
	NSMutableArray* mUrls;
	NSString* mPeriodicalTitle;
	NSString* mVolume;
	NSString* mNumber;
	NSString* mSection;
	NSString* mPubDate;
	NSString* mPages;
}
@property(retain, nonatomic) NSString* pages;	// @synthesize=mPages
@property(retain, nonatomic) NSMutableArray* urls;	// @synthesize=mUrls
@property(retain, nonatomic) NSString* pubDate;	// @synthesize=mPubDate
@property(retain, nonatomic) NSString* section;	// @synthesize=mSection
@property(retain, nonatomic) NSString* number;	// @synthesize=mNumber
@property(retain, nonatomic) NSString* volume;	// @synthesize=mVolume
@property(retain, nonatomic) NSString* periodicalTitle;	// @synthesize=mPeriodicalTitle
@property(retain, nonatomic) NSMutableArray* titles;	// @synthesize=mTitles
@property(retain, nonatomic) NSString* sourceType;	// @synthesize=mSourceType
@property(retain, nonatomic) NSMutableArray* authors;	// @synthesize=mAuthors
@property(retain, nonatomic) NSString* year;	// @synthesize=mYear
// declared property setter: -(void)setPages:(id)pages;
// declared property getter: -(id)pages;
// declared property setter: -(void)setUrls:(id)urls;
// declared property getter: -(id)urls;
// declared property setter: -(void)setPubDate:(id)date;
// declared property getter: -(id)pubDate;
// declared property setter: -(void)setSection:(id)section;
// declared property getter: -(id)section;
// declared property setter: -(void)setNumber:(id)number;
// declared property getter: -(id)number;
// declared property setter: -(void)setVolume:(id)volume;
// declared property getter: -(id)volume;
// declared property setter: -(void)setPeriodicalTitle:(id)title;
// declared property getter: -(id)periodicalTitle;
// declared property setter: -(void)setTitles:(id)titles;
// declared property getter: -(id)titles;
// declared property setter: -(void)setSourceType:(id)type;
// declared property getter: -(id)sourceType;
// declared property setter: -(void)setAuthors:(id)authors;
// declared property getter: -(id)authors;
// declared property setter: -(void)setYear:(id)year;
// declared property getter: -(id)year;
-(id)initWithDocument:(id)document;
-(id)document;
-(void)dealloc;
@end
