//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

#import <SearchUI/NUIContainerViewDelegate-Protocol.h>

@class SearchUIImageView;

@interface SearchUITwitterCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate>
{
    SearchUIImageView *_pictureView;
}

@property(retain, nonatomic) SearchUIImageView *pictureView; // @synthesize pictureView=_pictureView;
// - (void).cxx_destruct;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3;
- (id)setupContentView;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;

@end

