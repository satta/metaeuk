#!/bin/bash -ex

./test.sh "$1" minus_strand minus_strand_results
./test.sh "$1" multi_exon multi_exon_results
./test.sh "$1" two_contigs two_contigs_results
./test_no_overlap.sh "$1" no_overlap no_overlap_results
./test_groups.sh "$1" target_overlap target_overlap_results
./test_groups.sh "$1" cluster_rep cluster_rep_results
