//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CLLocation, NSDate, NSString, NSURL;

@interface PFSharingRemakerOptions : NSObject <NSCopying>
{
    BOOL _shouldStripLocation;
    BOOL _shouldStripAllMetadata;
    BOOL _shouldConvertToSRGB;
    CLLocation *_customLocation;
    NSDate *_customDate;
    NSString *_customAccessibilityLabel;
    NSURL *_outputDirectoryURL;
    NSString *_outputFilename;
    NSString *_exportPreset;
    NSString *_exportFileType;
}

@property(copy, nonatomic) NSString *exportFileType; // @synthesize exportFileType=_exportFileType;
@property(copy, nonatomic) NSString *exportPreset; // @synthesize exportPreset=_exportPreset;
@property(copy, nonatomic) NSString *outputFilename; // @synthesize outputFilename=_outputFilename;
@property(copy, nonatomic) NSURL *outputDirectoryURL; // @synthesize outputDirectoryURL=_outputDirectoryURL;
@property(copy, nonatomic) NSString *customAccessibilityLabel; // @synthesize customAccessibilityLabel=_customAccessibilityLabel;
@property(copy, nonatomic) NSDate *customDate; // @synthesize customDate=_customDate;
@property(copy, nonatomic) CLLocation *customLocation; // @synthesize customLocation=_customLocation;
@property(nonatomic) BOOL shouldConvertToSRGB; // @synthesize shouldConvertToSRGB=_shouldConvertToSRGB;
@property(nonatomic) BOOL shouldStripAllMetadata; // @synthesize shouldStripAllMetadata=_shouldStripAllMetadata;
@property(nonatomic) BOOL shouldStripLocation; // @synthesize shouldStripLocation=_shouldStripLocation;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;

@end
